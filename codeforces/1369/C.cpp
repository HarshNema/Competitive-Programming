//author: Harsh :)
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
#define maxN 100007
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0, k = 0;
    cin >> n >> k;
    ll ar[n], w[k];
    for (ll i = 0; i < n; ++i)
      cin >> ar[i];
    for (ll i = 0; i < k; ++i)
      cin >> w[i];
    sort(ar, ar + n);
    sort(w, w + k);
    ll ans = 0;
    for (ll i = 0; i < k; ++i) {
      ans += ar[n - 1 - i];
      if (w[i] == 1)
        ans += ar[n - 1 - i];
    }
    ll j = 0;
    for (ll i = k - 1; i >= 0; --i) {
      if (w[i] == 1)
        break;
      ans += ar[j];
      j += (w[i] - 1);
    }
    cout << ans << "\n";
  }
}
