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
    ll x = 0, y = 0, z = 0;
    cin >> x >> y >> z;
    ll a = max(x, max(y, z)), b = min(x, min(y, z));
    ll p = max(x, y), q = max(y, z), r = max(x, z);
    bool ok = true;
    if (p != a or q != a or r != a) ok = false;
    if (ok) {
      cout << "YES\n";
      cout << b << " " << b << " " << a << "\n";
    } else cout << "NO\n";
  }
}