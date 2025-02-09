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
    cin >> n;
    ll ar[n], locked[n];
    for (ll i = 0; i < n; ++i)
      cin >> ar[i];
    for (ll i = 0; i < n; ++i)
      cin >> locked[i];
    multiset<ll>s;
    for (ll i = 0; i < n; ++i) {
      if (!locked[i])
        s.insert(ar[i]);
    }
    ll final[n];
    for (ll i = 0; i < n; ++i) {
      if (locked[i])
        final[i] = ar[i];
      else {
        auto it = s.end();
        --it;
        final[i] = *it;
        s.erase(it);
      }
    }
    for (ll i = 0; i < n; ++i)
      cout << final[i] << " ";
    cout << "\n";
  }
}