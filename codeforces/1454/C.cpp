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
    vector<ll>v(n);
    map<ll, ll>mp;
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
    }
    v.erase(unique(v.begin(), v.end()), v.end());
    v.shrink_to_fit();
    for (ll i = 0; i < v.size(); ++i) {
      ++mp[v[i]];
    }
    ll ans = LIM;
    for (ll i = 0; i < v.size(); ++i) {
      ll curr = mp[v[i]] + 1;
      if (v[i] == v[0])
        --curr;
      if (v[i] == v.back())
        --curr;
      ans = min(ans, curr);
    }
    cout << ans << "\n";
  }
}