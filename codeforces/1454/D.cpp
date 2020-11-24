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
const ll maxN = (ll)3e2 + 5;
const ll LIM = (ll)1e18;
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    ll tn = n;
    map<ll, ll>mp;
    for (ll i = 2; i * i <= n; ++i) {
      while (n % i == 0)
        n /= i, ++mp[i];
    }
    if (n > 1)
      ++mp[n];
    ll sz = 0, j = 0;
    for (auto i : mp) {
      if (i.S > sz)
        j = i.F, sz = i.S;
    }
    cout << sz << "\n";
    for (ll i = 1; i < sz; ++i) {
      cout << j << " ";
      tn /= j;
    }
    cout << tn << "\n";
  }
}