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
    ll n = 0;
    cin >> n;
    string s;
    cin >> s;
    string x = "2020";
    bool ok = false;
    for (ll i = 0; i <= 4; ++i) {
      if ((s.substr(0, i) == x.substr(0, i)) and (s.substr(n + i - 4, 4 - i) == x.substr(i, 4 - i)))
        ok = true;
    }
    if (ok)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}