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
    ll n = 0;
    string s;
    cin >> n >> s;
    bool r = false, b = false;
    if (n & 1) {
      for (ll i = 0; i < n; ++i) {
        if ((i + 1) & 1 and (s[i] - '0') & 1)
          r = true;
      }
      if (r)
        cout << "1\n";
      else
        cout << "2\n";
    } else {
      for (ll i = 0; i < n; ++i) {
        if ((i + 1) & 1 ^ 1 and (s[i] - '0') & 1 ^ 1)
          b = true;
      }
      if (b)
        cout << "2\n";
      else
        cout << "1\n";
    }
  }
}
