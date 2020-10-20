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
ll ar[] = {1, 3, 40, 1260, 72576, 6652800, 889574400, 163459296000, 39520825344000, 12164510040883200, 4644631106519040000, 2154334728240414720000, 1193170003333152768000000, 777776389315596582912000000};
int main() {
  fastio;
  ll n = 0;
  cin >> n;
  cout << ar[n / 2 - 1];
}