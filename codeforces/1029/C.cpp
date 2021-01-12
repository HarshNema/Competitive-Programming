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
  ll n = 0;
  cin >> n;
  ll l[n], r[n];
  multiset<ll>ls, rs;
  for (ll i = 0; i < n; ++i) {
    cin >> l[i] >> r[i];
    ls.insert(l[i]);
    rs.insert(r[i]);
  }
  ll ans = 0;
  for (ll i = 0; i < n; ++i) {
    auto it = ls.find(l[i]);
    ls.erase(it);
    it = rs.find(r[i]);
    rs.erase(it);
    ll intLen = *rs.begin() - *ls.rbegin();
    ans = max(ans, intLen);
    ls.insert(l[i]);
    rs.insert(r[i]);
  }
  cout << ans << "\n";
}