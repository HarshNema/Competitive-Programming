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
#define maxN 200007
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    vector<ll>v(n, 0), freq(103, 0);
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
      ++freq[v[i]];
    }
    sort(v.begin(), v.end());
    ll ans = INT_MIN;
    for (ll target = 1; target <= 100; ++target) {
      ll pairs = 0, i = 0, j = n - 1;
      while (i < j) {
        ll curr_sum = v[i] + v[j];
        if (curr_sum == target) {
          ++pairs;
          ++i, --j;
        } else if (curr_sum < target) {
          ++i;
        } else {
          --j;
        }
      }
      ans = max(ans, pairs);
    }
    cout << ans << "\n";
  }
}