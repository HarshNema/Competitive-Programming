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
  set<pair<ll, ll>>s;
  ll n = 0;
  cin >> n;
  /*
   X
  XXX
   X
  `*/
  s.insert({ -1, -1});
  s.insert({n, n});
  for (ll i = 0; i < n; ++i) {
    s.insert({i, i});
    s.insert({i, i + 1});
    s.insert({i, i - 1});
    s.insert({i - 1, i});
    s.insert({i + 1, i});
  }
  cout << s.size() << "\n";
  for (auto i : s)
    cout << i.F << " " << i.S << "\n";
}