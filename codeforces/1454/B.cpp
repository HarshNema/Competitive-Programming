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
    map<ll, ll>mp;
    vector<ll>v(n);
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
      ++mp[v[i]];
    }
    ll x = -1;
    for (auto i : mp) {
      if (i.S == 1) {
        x = i.F;
        break;
      }
    }
    ll ans = -1;
    for (ll i = 0; i < n; ++i) {
      if (v[i] == x) {
        ans = i + 1;
        break;
      }
    }
    cout << ans << "\n";
  }
}