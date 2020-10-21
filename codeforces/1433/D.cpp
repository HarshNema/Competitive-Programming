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
    set<ll>s;
    vector<ll>v(n);
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
      s.insert(v[i]);
    }
    if (s.size() == 1)
      cout << "NO\n";
    else {
      cout << "YES\n";
      for (ll i = 0; i < n; ++i) {
        if (v[i] != v[0])
          cout << 1 << " " << i + 1 << "\n";
      }
      ll j = 0;
      while (j < n) {
        if (v[j] == v[0])
          ++j;
        else
          break;
      }
      for (ll i = 1; i < n; ++i) {
        if (v[i] == v[0])
          cout << j + 1 << " " << i + 1 << "\n";
      }
    }
  }
}