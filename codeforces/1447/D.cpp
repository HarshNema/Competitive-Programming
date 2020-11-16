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
  ll n = 0, m = 0;
  cin >> n >> m;
  string a, b;
  cin >> a >> b;
  ll dp[n + 1][m + 1];
  ll ans = 0;
  memset(dp, 0, sizeof(dp));
  for (ll i = 0; i <= n; ++i) {
    for (ll j = 0; j <= m; ++j) {
      if (i == 0 or j == 0)
        continue;
      else if (a[i - 1] == b[j - 1])
        dp[i][j] = max(2ll, dp[i - 1][j - 1] + 2);
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) - 1;
      ans = max(ans, dp[i][j]);
    }
  }
  cout << ans << "\n";
}
