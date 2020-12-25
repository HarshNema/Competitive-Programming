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
const ll maxN = (ll)1e6 + 5;
const ll LIM = (ll)1e18;
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0, m = 0, a = 0, b = 0;
    cin >> n >> m >> a >> b;
    vector<ll>s(m);
    for (ll i = 0; i < m; ++i)
      cin >> s[i];
    sort(s.begin(), s.end());
    ll j = 0, c = 0;
    if (b > a)
      j = b - 1;
    else
      j = n - b;
    for (ll i = m - 1; i >= 0; --i) {
      if (j > s[i]) {
        ++c, --j;
      }
    }
    cout << min(c, abs(a - b) - 1) << "\n";
  }
}