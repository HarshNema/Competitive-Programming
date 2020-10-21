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
const ll maxN = (ll)1e3 + 5;
using namespace std;
vector<pair<ll, ll>>edges;
vector<pair<ll, ll>>adj[maxN];
ll dist[maxN][maxN];
void dijkstra(ll source) {
  dist[source][source] = 0;
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
  pq.push({0, source});
  while (!pq.empty()) {
    ll v = pq.top().second;
    ll d_v = pq.top().first;
    pq.pop();
    if (d_v != dist[source][v])
      continue;
    for (auto edge : adj[v]) {
      ll to = edge.first;
      ll len = edge.second;
      if (dist[source][v] + len < dist[source][to]) {
        dist[source][to] = dist[source][v] + len;
        pq.push({dist[source][to], to});
      }
    }
  }
}
int main() {
  fastio;
  ll n = 0, m = 0, k = 0;
  cin >> n >> m >> k;
  for (ll i = 0; i < m; ++i) {
    ll from = 0, to = 0, cost = 0;
    cin >> from >> to >> cost;
    --from, --to;
    edges.pb({from, to});
    adj[from].pb({to, cost});
    adj[to].pb({from, cost});
  }
  for (ll i = 0; i < n; ++i) {
    for (ll j = 0; j < n; ++j) {
      dist[i][j] = INF;
    }
  }
  for (ll i = 0; i < n; ++i) {
    dijkstra(i);
  }
  // for (ll i = 0; i < n; ++i) {
  //   for (ll j = 0; j < n; ++j) {
  //     cout << dist[i][j] << " ";
  //   }
  //   cout << "\n";
  // }
  ll best = 0;
  vector<pair<ll, ll>>courier(k);
  for (ll i = 0; i < k; ++i) {
    cin >> courier[i].F >> courier[i].S;
    --courier[i].F;
    --courier[i].S;
    best += dist[courier[i].F][courier[i].S];
  }
  for (auto e : edges) {
    ll curr = 0;
    for (ll i = 0; i < k; ++i) {
      set<ll>s;
      s.insert(dist[courier[i].F][courier[i].S]);
      s.insert(dist[courier[i].F][e.F] + dist[e.S][courier[i].S]);
      s.insert(dist[courier[i].F][e.S] + dist[e.F][courier[i].S]);
      //deb(*s.begin());
      curr += *s.begin();
    }
    best = min(best, curr);
  }
  cout << best;
}