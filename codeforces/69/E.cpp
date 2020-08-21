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
int main() {
  fastio;
  ll n = 0, k = 0;
  cin >> n >> k;
  vector<ll>v(n);
  map<ll, ll>freq;
  set<ll>s;
  for (ll i = 0; i < n; ++i)
    cin >> v[i];
  for (ll i = 0; i < k; ++i) {
    if (freq[v[i]] == 1)
      s.erase(v[i]);
    ++freq[v[i]];
    if (freq[v[i]] == 1)
      s.insert(v[i]);
  }
  if (s.empty())
    cout << "Nothing\n";
  else
    cout << *s.rbegin() << "\n";
  for (ll i = k; i < n; ++i) {
    if (freq[v[i]] == 1)
      s.erase(v[i]);
    ++freq[v[i]];
    if (freq[v[i]] == 1)
      s.insert(v[i]);
    if (freq[v[i - k]] == 1)
      s.erase(v[i - k]);
    --freq[v[i - k]];
    if (freq[v[i - k]] == 1)
      s.insert(v[i - k]);
    if (s.empty())
      cout << "Nothing\n";
    else
      cout << *s.rbegin() << "\n";
  }
}