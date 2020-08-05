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
    vector<ll>v[2];
    string s;
    cin >> s;
    ll ans[n];
    ll req = 0;
    for (ll i = 0; i < n; ++i) {
      ll d = s[i] - '0';
      if (v[d].empty()) {
        ++req;
        v[d].pb(req);
      }
      ans[i] = v[d].back();
      v[d ^ 1].pb(ans[i]);
      v[d].pop_back();
    }
    cout << req << "\n";
    for (auto i : ans)
      cout << i << " ";
    cout << "\n";
  }
}