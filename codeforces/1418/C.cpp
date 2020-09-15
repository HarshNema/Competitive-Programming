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
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    ll ar[n];
    for (ll i = 0; i < n; ++i)
      cin >> ar[i];
    ll dp[n + 1][2];
    memset(dp, 0, sizeof(dp));
    dp[n - 1][0] = 0;
    dp[n - 1][1] = ar[n - 1];
    for (ll i = n - 2; i >= 0; --i) {
      dp[i][0] = min(dp[i + 1][1], dp[i + 2][1]);
      dp[i][1] = min(dp[i + 1][0], dp[i + 2][0] + ar[i + 1]) + ar[i];
    }
    cout << dp[0][1] << "\n";
  }
}