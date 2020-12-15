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
    vector<ll>v(n), presum(n);
    set<ll>s;
    for (ll i = 0; i < n; ++i)
      cin >> v[i];
    presum[0] = v[0];
    for (ll i = 1; i < n; ++i)
      presum[i] = presum[i - 1] + v[i];
    for (ll i = 0; i < n; ++i) {
      s.insert(presum[i]);
    }
    ll maxm = 0;
    for (ll i = 0; i < n; ++i) {
      ll curr_max = 0;
      for (ll j = 1; j <= n; ++j) {
        if (s.find(presum[i]*j) != s.end())
          curr_max = max(j, curr_max);
        else
          break;
      }
      if (presum[i]*curr_max == presum[n - 1])
        maxm = max(maxm, curr_max);
    }
    cout << n - maxm << "\n";
  }
  return 0;
}