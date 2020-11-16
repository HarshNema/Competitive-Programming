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
    ll n = 0, m = 0;
    cin >> n >> m;
    ll ar[n][m];
    ll c = 0, minm = INT_MAX, ans = 0;
    for (ll i = 0; i < n; ++i) {
      for (ll j = 0; j < m; ++j) {
        cin >> ar[i][j];
        minm = min(abs(ar[i][j]), minm);
        c += (ar[i][j] < 0);
        ans += abs(ar[i][j]);
      }
    }
    if (c & 1)
      ans -= 2 * minm;
    cout << ans << "\n";
  }
}
