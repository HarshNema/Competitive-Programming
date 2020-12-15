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
    ll n = 0;
    cin >> n;
    vector<ll>l(n), r(n), sl(n), sr(n);
    for (ll i = 0; i < n; ++i) {
      cin >> l[i] >> r[i];
    }
    sl = l, sr = r;
    sort(sl.begin(), sl.end());
    sort(sr.begin(), sr.end());
    ll ans = LIM;
    for (ll i = 0; i < n; ++i) {
      ll curr = 0;
      ll x = lower_bound(sr.begin(), sr.end(), l[i]) - sr.begin();
      if (x > 0)
        curr += x;
      ll y = upper_bound(sl.begin(), sl.end(), r[i]) - sl.begin();
      if (y < n)
        curr += (n - y);
      ans = min(ans, curr);
    }
    cout << ans << "\n";
  }
  return 0;
}