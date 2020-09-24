#include "bits/stdc++.h"
#define ll long long int
#define F first
#define S second
const ll mod = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
char ar[1000][1000];
bool check(ll x, ll y, char ar[1000][1000]) {
  if (ar[x - 1][y] == '*' && ar[x + 1][y] == '*' && ar[x][y + 1] == '*' && ar[x][y - 1] == '*')
    return true;
  else
    return false;
}
int main() {
  fastio;
  ll w = 0, h = 0;
  cin >> h >> w;
  bool vis[1000][1000];
  for (ll i = 0; i < h; ++i) {
    for (ll j = 0; j < w; ++j) {
      cin >> ar[i][j];
    }
  }
  ll a = 0, b = 0;
  bool f1 = 0;
  for (ll i = 1; i < h - 1; ++i) {
    for (ll j = 1; j < w - 1; ++j) {
      if (ar[i][j] == '*') {
        if (check(i, j, ar)) {
          f1 = 1;
          a = i, b = j;
          vis[i][j] = true;
          break;
        }
      }
    }
  }
  if (f1 == 0) {
    cout << "NO\n";
    return 0;
  }
  ll u = 0, d = 0, l = 0, r = 0;
  ll i = a;
  bool f = 1;
  while (i >= 0) {
    if (ar[i][b] == '*') {
      ++u;
      vis[i][b] = true;
    } else
      break;
    --i;
  }
  i = a;
  while (i < h) {
    if (ar[i][b] == '*') {
      ++d;
      vis[i][b] = true;
    } else
      break;
    ++i;
  }
  ll j = b;
  while (j >= 0) {
    if (ar[a][j] == '*') {
      ++l;
      vis[a][j] = true;
    } else
      break;
    --j;
  }
  j = b;
  while (j < w) {
    if (ar[a][j] == '*') {
      ++r;
      vis[a][j] = true;
    } else
      break;
    ++j;
  }
  if (u == 0 || d == 0 || l == 0 || r == 0)
    f = 0;
  if (f == 0)
    cout << "NO\n";
  else {
    for (ll i = 0; i < h; ++i) {
      for (ll j = 0; j < w; ++j) {
        if (ar[i][j] == '*' && vis[i][j] == false) {
          cout << "NO\n";
          return 0;
        }
      }
    }
    cout << "YES\n";
  }
  return 0;
}
