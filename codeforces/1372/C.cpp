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
    vector<ll>a(n + 1, 0), sa(n + 1, 0);
    for (ll i = 1; i <= n; ++i) {
      cin >> a[i];
      sa[i] = a[i];
    }
    sort(sa.begin(), sa.end());
    if (a == sa) cout << "0\n";
    else {
      ll i = 1, j = n;
      while (i < n) {
        if (a[i] == sa[i])
          ++i;
        else
          break;
      }
      while (i <= j) {
        if (a[j] == sa[j])
          --j;
        else
          break;
      }
      ll c = 0;
      ll l = i, r = j;
      for (ll i = l; i <= r; ++i) {
        if (a[i] == i)
          ++c;
      }
      if (c) cout << "2\n";
      else cout << "1\n";
    }
  }
}

