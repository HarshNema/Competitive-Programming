//author: Harsh :)
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define maxN 100007
using namespace std;
int main() {
  fastio;
  // ll t = 0;
  // cin >> t;
  // while (t--) {
    ll n = 0;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0; i < n; ++i) cin >> v[i];
    vector<ll>sum(2 * n + 2, 0);
    for (ll i = 2; i < 2 * n + 2; ++i)
      sum[i] = sum[i - 2] + v[(i - 2) % n];
    ll ans = 0;
    for (ll i = 2; i <= n + 2; ++i)
      ans = max(ans, sum[i + n - 1] - sum[i - 2]);
    cout << ans << "\n";
  //}
}

