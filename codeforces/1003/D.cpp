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
  ll n = 0, q = 0;
  cin >> n >> q;
  vector<ll>v(n);
  vector<ll>freq(32, 0);
  for (ll i = 0; i < n; ++i) {
    cin >> v[i];
    ++freq[__builtin_ctz(v[i])];
  }
  vector<ll>b(q), ans(q);
  for (ll i = 0; i < q; ++i) {
    cin >> b[i];
    for (ll p = 30; p >= 0; --p) {
      ll d = (1ll << p);
      ll need = b[i] / d;
      b[i] -= min(freq[p], need) * d;
      ans[i] += min(freq[p], need);
    }
    if (b[i])
      ans[i] = -1;
  }
  for (ll i = 0; i < q; ++i)
    cout << ans[i] << "\n";
  return 0;
}
