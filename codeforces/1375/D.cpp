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
    vector<ll>v(n);
    vector<ll>pos;
    map<ll, ll>freq;
    for (ll i = 0; i < n; ++i) {
      cin >> v[i];
      ++freq[v[i]];
    }
    for (ll i = 0; i < n; ++i) {
      ll mex = -1;
      for (ll j = 0; j <= n; ++j)
        if (freq[j] == 0) {
          mex = j;
          break;
        }
      if (mex == n) {
        ll index = -1;
        for (ll j = 0; j < n; ++j)
          if (v[j] != j) {
            index = j;
            break;
          }
        if (index != -1) {
          ++freq[mex];
          --freq[v[index]];
          v[index] = mex;
          pos.pb(index + 1);
        } else break;
      }
      mex = -1;
      for (ll j = 0; j <= n; ++j)
        if (freq[j] == 0) {
          mex = j;
          break;
        }
      ++freq[mex];
      --freq[v[mex]];
      v[mex] = mex;
      pos.pb(mex + 1);
    }
    cout << pos.size() << "\n";
    for (auto i : pos) cout << i << " ";
    cout << "\n";
  }
}

