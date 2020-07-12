//author: Harsh :)
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
#define maxN 100007
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0, x = 0;
    cin >> n >> x;
    vector<ll>v(n);
    for (ll i = 0; i < n; ++i)
      cin >> v[i];
    vector<ll>remaining;
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
      if (v[i] >= x)
        ++ans;
      else
        remaining.pb(v[i]);
    }
    sort(remaining.begin(), remaining.end(), greater<ll>());
    ll last = 0;
    for (ll i = 0; i < remaining.size(); ++i) {
      if ((i + 1 - last)*remaining[i] >= x) {
        last = i + 1, ++ans;
      }
    }
    cout << ans << "\n";
  }
}