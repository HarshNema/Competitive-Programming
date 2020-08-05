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
    ll ar[n];
    for (ll i = 0; i < n; ++i)
      cin >> ar[i];
    bool ok = true;
    sort(ar, ar + n);
    for (ll i = 0; i < n - 1; ++i) {
      if (ar[i + 1] - ar[i] > 1) {
        ok = false;
        break;
      }
    }
    if (ok)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}