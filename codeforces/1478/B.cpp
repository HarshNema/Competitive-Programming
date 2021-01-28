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
const ll maxN = (ll)1e3 + 5;
const ll LIM = (ll)1e18;
using namespace std;
vector<ll>v;
ll vis[maxN];
void solve(string s, char d) {
  ll n = s.length();
  if (n > 3)
    return;
  bool ok = true;
  for (ll i = 0; i < n; ++i) {
    if (s[i] == d) {
      ok = false;
      break;
    }
  }
  if (!ok) {
    auto it = s.c_str();
    v.pb(atoll(it));
  }
  for (ll i = 0; i < 10; ++i) {
    string temp = s;
    temp += to_string(i);
    solve(temp, d);
  }
}
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    v.clear();
    memset(vis, 0, sizeof(vis));
    ll q = 0;
    char d;
    cin >> q >> d;
    string s = "";
    solve(s, d);
    sort(v.begin(), v.end());
    vis[0] = 1;
    for (ll i = 0; i < maxN; ++i) {
      if (vis[i]) {
        for (auto j : v) {
          if (i + j < maxN)
            vis[i + j] = 1;
        }
      }
    }
    while (q--) {
      ll i = 0;
      cin >> i;
      if (i >= 1000 or vis[i])
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
}