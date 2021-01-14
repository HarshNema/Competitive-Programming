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
const ll maxN = (ll)5e2 + 5;
const ll LIM = (ll)1e18;
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0, k = 0;
    cin >> n >> k;
    for (ll i = 1; i <= 2 * k - n - 1; ++i)
      cout << i << " ";
    for (ll i = k; i >= 2 * k - n; --i)
      cout << i << " ";
    cout << "\n";
  }
}