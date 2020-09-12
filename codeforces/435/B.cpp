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
  string s;
  ll rem = 0;
  cin >> s >> rem;
  ll n = s.length();
  ll x = 0;
  for (ll i = 0; i < n; ++i) {
    x = i;
    for (ll j = i; j < n; ++j) {
      if (s[j] > s[x] and j - i <= rem)
        x = j;
    }
    for (ll j = x; j > i; --j) {
      swap(s[j], s[j - 1]);
    }
    rem -= (x - i);
  }
  cout << s << "\n";
}