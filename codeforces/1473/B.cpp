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
const ll maxN = (ll)5e2 + 5;
const ll LIM = (ll)1e18;
using namespace std;
ll gcd(ll a, ll b) {
  if (a == 0)
    return b;
  else
    return gcd(b % a, a);
}
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    string s, t;
    cin >> s >> t;
    ll n = s.length();
    ll m = t.length();
    ll x = n / gcd(n, m);
    ll y = m / gcd(n, m);
    string a = "", b = "";
    for (ll i = 0; i < x; ++i)
      a += t;
    for (ll i = 0; i < y; ++i)
      b += s;
    if (a != b)
      cout << "-1\n";
    else
      cout << a << "\n";
  }
}