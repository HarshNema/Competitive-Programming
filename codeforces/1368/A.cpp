//author: Harsh :)
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
    ll a = 0, b = 0, n = 0;
    cin >> a >> b >> n;
    ll c = 0;
    while (a <= n and b <= n) {
      if (a < b) a += b;
      else b += a;
      ++c;
    }
    cout << c << "\n";
  }
}