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
    ll n = 0;
    cin >> n;
    vector<ll>v(n, 0);
    for (ll i = 0; i < n; ++i)
      cin >> v[i];
    ll x = 0;
    bool ok = false;
    for (ll i = 0; i < n - 2; ++i) {
      if (v[i] < v[i + 1] and v[i + 1] > v[i + 2]) {
        ok = true;
        x = i + 1;
      }
    }
    if (ok) {
      cout << "YES\n";
      cout << x << " " << x + 1 << " " << x + 2 << "\n";
    } else
      cout << "NO\n";
  }
}

