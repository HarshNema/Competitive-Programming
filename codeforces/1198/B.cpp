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
ll ar[maxN], last[maxN], x[maxN];
int main() {
  fastio;
  ll n = 0;
  cin >> n;
  for (ll i = 0; i < n; ++i)
    cin >> ar[i];
  ll q = 0;
  cin >> q;
  for (ll i = 0; i < q; ++i) {
    ll type = 0, j = 0;
    cin >> type;
    if (type == 2)
      cin >> x[i];
    else {
      ll j = 0, val = 0;
      cin >> j >> val;
      --j;
      ar[j] = val;
      last[j] = i;
    }
  }
  for (ll i = q - 2; i >= 0; --i)
    x[i] = max(x[i], x[i + 1]);
  for (ll i = 0; i < n; ++i)
    cout << max(ar[i], x[last[i]]) << " ";
}