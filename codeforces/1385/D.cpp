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
ll dfs(string s, char c) {
  ll n = s.length();
  if (n == 1) {
    if (s[0] != c)
      return 1;
    else
      return 0;
  }
  string x = "", y = "";
  ll a = 0, b = 0;
  for (ll i = 0; i < n; ++i) {
    if (i < n / 2) {
      x += s[i];
      b += (s[i] != c);
    } else {
      y += s[i];
      a += (s[i] != c);
    }
  }
  ll first_cost = dfs(x, c + 1) + a;
  ll second_cost = dfs(y, c + 1) + b;
  return min(first_cost, second_cost);
}
int main() {
  fastio;
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    string s;
    cin >> s;
    cout << dfs(s, 'a') << "\n";
  }
}