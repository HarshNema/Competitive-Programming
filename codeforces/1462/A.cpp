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
    vector<ll>v(n);
    for (ll i = 0; i < n; ++i)
      cin >> v[i];
    vector<ll>ans;
    for (ll i = 0; i < n / 2; ++i) {
      ans.pb(v[i]);
      ans.pb(v[n - 1 - i]);
    }
    if (n & 1)
      ans.pb(v[n / 2]);
    for (auto i : ans)
      cout << i << " ";
    cout << "\n";
  }
  return 0;
}