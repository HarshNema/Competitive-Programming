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
  ll n = 0;
  cin >> n;
  vector<ll>count(20, 0);
  vector<ll>v(n, 0);
  for (ll i = 0; i < n; ++i)
    cin >> v[i];
  ll ans = 0;
  for (ll i = 0; i < n; ++i) {
    for (ll j = 0; j < 20; ++j) {
      if ((v[i] >> j) & 1)
        ++count[j];
    }
  }
  for (ll i = 0; i < n; ++i) {
    v[i] = 0;
    for (ll j = 0; j < 20; ++j) {
      if (count[j] >= 1) {
        v[i] += (1 << j);
        --count[j];
      }
    }
  }
  for (auto i : v)
    ans += i * i;
  cout << ans;
}