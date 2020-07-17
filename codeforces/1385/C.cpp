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
#define maxN 200007
using namespace std;
vector<ll>v(maxN);
ll n = 0;
bool ok(ll i) {
  ll l = i, r = n - 1;
  ll prev = INT_MIN;
  while (l < r) {
    if (v[l] < v[r]) {
      if (v[l] >= prev) {
        prev = v[l];
        ++l;
      } else return false;
    } else {
      if (v[r] >= prev) {
        prev = v[r];
        --r;
      } else return false;
    }
  }
  return true;
}
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    cin >> n;
    for (ll i = 0; i < n; ++i)
      cin >> v[i];
    ll l = 0, r = n;
    while (l < r) {
      ll mid = l + (r - l) / 2;
      if (ok(mid))
        r = mid;
      else
        l = mid + 1;
    }
    cout << l << "\n";
  }
}