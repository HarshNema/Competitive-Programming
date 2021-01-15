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
const ll maxN = (ll)1e5 + 5;
const ll LIM = (ll)1e18;
using namespace std;
ll n = 0;
vector<vector<ll>>adj;
vector<ll>d;
vector<ll>v;
ll dfs(ll u, ll prev = -1) {
  d[u] = 1;
  for (auto x : adj[u]) {
    if (x != prev) {
      d[u] += dfs(x, u);
      v.pb(d[x] * (n - d[x]));
    }
  }
  return d[u];
}
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    cin >> n;
    ll ans = 0;
    v.clear();
    d.clear();
    adj.clear();
    d.resize(n);
    adj.resize(n);
    for (ll i = 0; i < n - 1; ++i) {
      ll a = 0, b = 0;
      cin >> a >> b;
      --a, --b;
      adj[a].pb(b);
      adj[b].pb(a);
    }
    dfs(0);
    ll m = 0;
    cin >> m;
    vector<ll>p(m);
    for (ll i = 0; i < m; ++i) {
      cin >> p[i];
    }
    sort(p.rbegin(), p.rend());
    sort(v.rbegin(), v.rend());
    for (auto i : v)
      i %= mod;
    if (m <= n - 1) {
      for (ll i = 0; i < v.size(); i++) {
        if (i >= m) {
          (ans += v[i]) %= mod;
        } else {
          (ans += v[i] * p[i]) %= mod;
        }
      }
    } else {
      ll x = v[0];
      ll d = m - n + 1;
      for (ll i = 0; i <= d; i++)
        (x *= p[i]) %= mod;
      (ans += x) %= mod;
      for (ll i = 1; i < n - 1; i++) {
        (ans += (v[i] * p[i + d]) % mod) %= mod;
      }
    }
    cout << ans << "\n";
  }
}