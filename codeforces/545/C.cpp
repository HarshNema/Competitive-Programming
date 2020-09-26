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
const ll maxN = (ll)1e5 + 7;
using namespace std;
int main() {
  fastio;
  ll n = 0;
  cin >> n;
  vector<ll>x(n + 2), h(n + 1);
  for (ll i = 1; i <= n; ++i) {
    cin >> x[i] >> h[i];
  }
  x[0] = -INF;
  x[n + 1] = INF;
  ll ans = 0;
  bool last_was_right = false;
  for (ll i = 1; i <= n; ++i) {
    if (x[i] - h[i] > x[i - 1] + (last_was_right ? h[i - 1] : 0)) {
      last_was_right = false;
      ++ans;
    } else if (x[i] + h[i] < x[i + 1]) {
      last_was_right = true;
      ++ans;
    } else {
      last_was_right = false;
    }
  }
  cout << ans << "\n";
}
