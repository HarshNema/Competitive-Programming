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
#define maxN 207
using namespace std;
ll n = 0, m = 0;
string s, t;
ll dp[maxN][maxN][maxN];
int main() {
  fastio;
  cin >> n >> m;
  cin >> s >> t;
  memset(dp, -INF, sizeof(dp));
  dp[0][0][0] = 0;
  for (ll i = 0; i < n; ++i) {
    for (ll j = 0; j <= n; ++j) {
      for (ll k = 0; k <= m; ++k) {
        dp[i + 1][j][k] = max(dp[i][j][k], dp[i + 1][j][k]);
        if (t[0] == t[1]) {
          if (s[i] != t[0])
            dp[i + 1][j + 1][k + 1] = max(dp[i][j][k] + j, dp[i + 1][j + 1][k + 1]);
          else
            dp[i + 1][j + 1][k] = max(dp[i][j][k] + j, dp[i + 1][j + 1][k]);
        } else {
          if (s[i] != t[0])
            dp[i + 1][j + 1][k + 1] = max(dp[i][j][k], dp[i + 1][j + 1][k + 1]);
          else
            dp[i + 1][j + 1][k] = max(dp[i][j][k], dp[i + 1][j + 1][k]);
          if (s[i] != t[1])
            dp[i + 1][j][k + 1] = max(dp[i][j][k] + j, dp[i + 1][j][k + 1]);
          else
            dp[i + 1][j][k] = max(dp[i][j][k] + j, dp[i + 1][j][k]);
        }
      }
    }
  }
  ll ans = 0;
  for (ll j = 0; j <= n; ++j) {
    for (ll k = 0; k <= m; ++k) {
      ans = max(ans, dp[n][j][k]);
    }
  }
  cout << ans;
}