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
#define maxN 207
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0, q = 0;
    cin >> n >> q;
    vector<ll>v(n);
    ll prev = 0, ans = 0;
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
    }
    for (ll i = 0; i < n; ++i) {
      ll d = v[i] - prev;
      if (d > 0)
        ans += d;
      prev = v[i];
    }
    cout << ans << "\n";
  }
}
