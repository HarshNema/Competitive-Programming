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
    ll x = 0, y = 0, k = 0;
    cin >> x >> y >> k;
    --x;
    ll ans = k * (y + 1) - 1;
    if (ans % x)
      ans = ans / x + 1;
    else
      ans = ans / x;
    ans += k;
    cout << ans << "\n";
  }
}