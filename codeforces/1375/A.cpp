//author: Harsh :)
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
#define pb insert_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define maxN 100007
using namespace std;
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    vector<ll>v(n, 0);
    for (ll i = 0; i < n; ++i) cin >> v[i];
    for (ll i = 0; i < n; ++i) {
      if (i & 1 and v[i] >= 0)
        v[i] *= (-1);
      else if (i & 1 ^ 1 and v[i] < 0)
        v[i] *= (-1);
    }
    for (auto i : v) cout << i << " ";
    cout << "\n";
  }
}