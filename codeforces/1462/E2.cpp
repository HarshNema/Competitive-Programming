#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define F first
#define S second
const ll mod = (ll)1e9 + 7;
const ll INF = 922337203685477;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
const ll maxN = (ll)1e6 + 5;
const ll LIM = (ll)1e18;
using namespace std;
vector<ll>fact(maxN, 0);
void calc_fact() {
  fact[0] = 1;
  for (ll i = 1; i <= maxN; i++) {
    fact[i] = (fact[i - 1] * i) % mod;
  }
}
ll modexp(ll x, ll y, ll p) {
  ll res = 1;
  x = x % p;
  while (y > 0) {
    if (y & 1)
      res = (res * x) % p;
    y = y >> 1;
    x = (x * x) % p;
  }
  return res;
}
ll gcd(ll a, ll b) {
  if (a == 0)
    return b;
  else
    return gcd(b % a, a);
}
ll modInv(ll a) {
  return modexp(a, mod - 2, mod);
}
ll nCr(ll n, ll r, ll p) {
  if (r == 0)
    return 1;
  return (fact[n] * modInv(fact[r]) % p * modInv(fact[n - r]) % p) % p;
}
ll addmod(ll a, ll b) {
  if (0 == b)
    return a;
  b = mod - b;
  if (a >= b)
    return a - b;
  else
    return mod - b + a;
}
int main() {
  fastio;
  calc_fact();
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    --m;
    vector<ll>v(n);
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
      ll x = v[i] - k;
      ll j = lower_bound(v.begin(), v.end(), x) - v.begin();
      if (i - j >= m) {
        x = i - j;
        ans = addmod(ans, nCr(x, m, mod));
      }
    }
    cout << ans << "\n";
  }
  return 0;
}