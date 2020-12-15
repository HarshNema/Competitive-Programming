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
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (ll i = 2; i < n; ++i) {
      ll x = v[i] - 2;
      ll j = lower_bound(v.begin(), v.end(), x) - v.begin();
      if (i - j >= 2) {
        x = i - j;
        ans += x * (x - 1) / 2;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}