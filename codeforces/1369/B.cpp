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
    string s;
    cin >> s;
    ll i = 0, j = n - 1;
    while (i < n && s[i] == '0') ++i;
    while (j >= 0 && s[j] == '1') --j;
    if (i < j)
      cout << s.substr(0, i) << s.substr(j) << "\n";
    else
      cout << s << "\n";
  }
}
