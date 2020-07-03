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
  // ll t = 0;
  // cin >> t;
  // while (t--) {
    ll k = 0;
    cin >> k;
    vector<ll>freq(10, 1);
    ll subs = 1, i = 0;
    while (subs < k) {
      ++freq[i];
      ++i;
      i %= 10;
      subs = 1;
      for (ll j = 0; j < 10; ++j)
        subs *= freq[j];
    }
    string s = "codeforces";
    for (ll i = 0; i < 10; ++i)
      cout << string(freq[i], s[i]);
    cout << "\n";
  //}
}