//author: Harsh :)
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
#define pb insert_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define maxN 100007
using namespace std;
ll n = 0, m = 0;
ll neighbours(ll i, ll j) {
  ll c = 0;
  if (i > 0) ++c;
  if (j > 0) ++c;
  if (i + 1 < n) ++c;
  if (j + 1 < m) ++c;
  return c;
}
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    ll ar[n][m];
    bool ok = true;
    for (ll i = 0; i < n; ++i) {
      for (ll j = 0; j < m; ++j)
        cin >> ar[i][j];
    }
    for (ll i = 0; i < n; ++i) {
      for (ll j = 0; j < m; ++j) {
        ll k = ar[i][j];
        if (k > neighbours(i, j)) {
          ok = false;
          break;
        } else
          ar[i][j] = neighbours(i, j);
      }
    }
    if (!ok) cout << "NO\n";
    else {
      cout << "YES\n";
      for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j)
          cout << ar[i][j] << " ";
        cout << "\n";
      }
    }
  }
}