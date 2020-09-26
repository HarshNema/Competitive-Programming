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
const ll maxN = (ll)1e5 + 7;
using namespace std;
int main() {
  fastio;
  ll n = 0;
  cin >> n;
  vector<ll>v(maxN);
  vector<ll>freq(maxN, 0);
  for (ll i = 1; i <= n; ++i) {
    cin >> v[i];
    ++freq[v[i]];
  }
  vector<ll>dp(maxN, 0);
  dp[1] = freq[1];
  for (ll i = 2; i < maxN; ++i)
    dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
  cout << dp[maxN - 1];
}
