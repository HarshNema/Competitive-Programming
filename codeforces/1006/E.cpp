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
const ll maxN = (ll)2e5 + 5;
using namespace std;
vector<ll>adj[maxN];
vector<ll>order;
vector<ll>sz(maxN, 0);
vector<ll>pos(maxN, 0);
void dfs(ll u) {
  sz[u] = 1;
  pos[u] = order.size() + 1;
  order.pb(u);
  for (auto v : adj[u]) {
    dfs(v);
    sz[u] += sz[v];
  }
}
int main() {
  fastio;
  ll n = 0, q = 0;
  cin >> n >> q;
  vector<ll>v(n);
  for (ll i = 1; i < n; ++i) {
    cin >> v[i];
    --v[i];
    adj[v[i]].pb(i);
  }
  for (ll i = 0; i < n; ++i)
    sort(adj[i].begin(), adj[i].end());
  dfs(0);
  while (q--) {
    ll u = 0, k = 0;
    cin >> u >> k;
    --u;
    if (sz[u] < k)
      cout << "-1\n";
    else
      cout << order[pos[u] - 1 + k - 1] + 1 << "\n";
  }
  return 0;
}