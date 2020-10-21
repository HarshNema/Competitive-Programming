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
    vector<ll>v(n);
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
    }
    ll c = 0, ans = -1;
    ll maxm = *max_element(v.begin(), v.end());
    for (ll i = 0; i < n; ++i) {
      if (v[i] == maxm and ((i > 0 and v[i - 1] < maxm) or (i + 1 < n and v[i + 1] < maxm)))
        ans = i + 1;
    }
    cout << ans << "\n";
  }
}