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
  ll n = 0, k = 0;
  cin >> n >> k;
  ll ar[n];
  for (ll i = 0; i < n; ++i)
    cin >> ar[i];
  sort(ar, ar + n);
  ll pairs = 0, i = 0;
  for (ll j = n / 2; j < n; ++j) {
    if (i >= n / 2)
      break;
    if (ar[j] - ar[i] >= k) {
      ++i;
      ++pairs;
    }
  }
  cout << pairs << "\n";
}