#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n = 0, x = 0, a = 0, b = 1023, p = 0, q = 0;
  char c;
  cin >> n;
  for (ll i = 0; i < n; ++i) {
    cin >> c >> x;
    if (c == '|')
      a |= x, b |= x;
    if (c == '&')
      a &= x, b &= x;
    if (c == '^')
      a ^= x, b ^= x;
  }
  for (ll i = 0; i < 10; ++i) {
    x = 1 << i;
    if ((~a & x) && (~b & x))
      p |= x, q |= x;
    if ((a & x) && (b & x))
      p |= x;
    if ((a & x) && (~b & x))
      q |= x;
  }
  cout << "2\n";
  cout << "| " << p << "\n";
  cout << "^ " << q << "\n";
  return 0;
}