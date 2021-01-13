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
const ll maxN = (ll)5e2 + 5;
const ll LIM = (ll)1e18;
ll v[maxN], w[maxN];
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    memset(v, 0, sizeof(v));
    memset(w, 0, sizeof(w));
    ll n = 0, x = 0;
    cin >> n >> x;
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
      w[i] = v[i];
    }
    ll ans = INF;
    sort(w, w + n);
    bool same = true;
    for (ll i = 0; i < n; ++i) {
      if (v[i] != w[i]) {
        same = false;
        break;
      }
    }
    if (same)
      ans = 0;
    for (ll i = 0; i < n; ++i) {
      for (ll j = 0; j < n; ++j) {
        if (i != j)
          w[j] = v[j];
        else
          w[j] = INF;
      }
      w[n] = x;
      sort(w, w + n + 1);
      ll prev = x, curr = 0;
      for (ll j = 0; j < n; ++j) {
        if (v[j] != w[j]) {
          if (w[j] != prev or v[j] <= prev) {
            curr = INF;
            break;
          }
          prev = v[j];
          ++curr;
        }
      }
      ans = min(curr, ans);
    }
    if (ans != INF)
      cout << ans << "\n";
    else
      cout << "-1\n";
  }
}