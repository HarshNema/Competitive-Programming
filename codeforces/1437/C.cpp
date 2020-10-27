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
ll dp[maxN][maxN];
ll ar[maxN];
ll rec(ll i, ll j, ll n) {
  if (i == n)
    return 0;
  if (j >= maxN)
    return INF;
  if (dp[i][j] != -1)
    return dp[i][j];
  ll best = INF;
  for (ll k = j; k < maxN; ++k) {
    ll current = rec(i + 1, k + 1, n);
    current += abs(ar[i] - k);
    best = min(best, current);
  }
  dp[i][j] = best;
  return dp[i][j];
}
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    for (ll i = 0; i < n; ++i) {
      cin >> ar[i];
    }
    sort(ar, ar + n);
    for (ll i = 0; i < maxN; ++i) {
      for (ll j = 0; j < maxN; ++j) {
        dp[i][j] = -1;
      }
    }
    cout << rec(0, 1, n) << "\n";
  }
}
