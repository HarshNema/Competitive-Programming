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
    string s;
    cin >> s;
    ll a = s[0] - '0';
    ll n = s.length();
    ll ans = 0;
    ans += (a - 1) * (10);
    ans += n * (n + 1) / 2;
    cout << ans << "\n";
  }
}