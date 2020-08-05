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
#define maxN 200007
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; ++i)
      cin >> a[i];
    for (ll i = 0; i < n; ++i)
      cin >> b[i];
    ll ans = 0;
    ll x = *min_element(a, a + n);
    ll y = *min_element(b, b + n);
    for (ll i = 0; i < n; ++i) {
      ll d1 = a[i] - x, d2 = b[i] - y;
      ll third = min(d1, d2);
      ans += third;
      ans += (d1 + d2 - 2 * third);
    }
    cout << ans << "\n";
  }
}