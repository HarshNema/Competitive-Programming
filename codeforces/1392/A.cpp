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
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    ll ar[n];
    for (ll i = 0; i < n; ++i) {
      cin >> ar[i];
    }
    ll minm = *min_element(ar, ar + n);
    ll maxm = *max_element(ar, ar + n);
    if (minm == maxm)
      cout << n << "\n";
    else
      cout << 1 << "\n";
  }
}