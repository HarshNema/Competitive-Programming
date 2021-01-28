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
const ll maxN = (ll)1e2 + 5;
const ll LIM = (ll)1e18;
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    n *= 2;
    bool ok = true;
    vector<ll>v(n, 0);
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for (ll i = 0; i < n / 2; ++i) {
      if (v[2 * i] != v[2 * i + 1] or v[2 * i + 1] == v[2 * i + 2]) {
        ok = false;
        break;
      }
    }
    if (!ok) {
      cout << "NO\n";
    } else {
      ll s = 0;
      ok = true;
      for (ll i = 0; i < n / 2; ++i) {
        ll a = v[2 * i] - 2 * s;
        ll b = n - 2 * i;
        ll m = a % b;
        ll d = a / b;
        if (d <= 0) {
          ok = false;
          break;
        }
        if (m != 0) {
          ok = false;
          break;
        }
        s += d;
      }
      if (ok)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
}