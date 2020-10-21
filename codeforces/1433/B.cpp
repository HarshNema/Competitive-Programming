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
const ll maxN = (ll)1e5 + 5;
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    vector<ll>v(n);
    ll prev = -1;
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
      if (v[i] == 1) {
        if (prev == -1)
          prev = i;
        else {
          ans += (i - prev - 1);
          prev = i;
        }
      }
    }
    cout << ans << "\n";
  }
}