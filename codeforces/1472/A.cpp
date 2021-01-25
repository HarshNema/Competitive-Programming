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
const ll maxN = (ll)1e5 + 5;
const ll LIM = (ll)1e18;
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll w = 0, h = 0, n = 0;
    cin >> w >> h >> n;
    ll cnt = 1;
    while (w & 1 ^ 1) {
      w /= 2;
      cnt *= 2;
    }
    while (h & 1 ^ 1) {
      h /= 2;
      cnt *= 2;
    }
    if (cnt >= n)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}