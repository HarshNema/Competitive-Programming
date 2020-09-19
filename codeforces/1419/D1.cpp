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
#define maxN 207
using namespace std;
int main() {
  fastio;
  ll n = 0;
  cin >> n;
  vector<ll>v(n), ar(n);
  for (ll i = 0; i < n; ++i)
    cin >> v[i];
  sort(v.begin(), v.end());
  ll j = 0, c = 0;
  for (ll i = 1; i < n; i += 2)
    ar[i] = v[j++];
  for (ll i = 0; i < n; i += 2)
    ar[i] = v[j++];
  for (ll i = 1; i < n - 1; ++i) {
    if (ar[i - 1] > ar[i] and ar[i] < ar[i + 1])
      ++c;
  }
  cout << c << "\n";
  for (ll i = 0; i < n; ++i)
    cout << ar[i] << " ";
}
