#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define F first
#define S second
const ll mod = (ll)1e9 + 7;
const ll INF = 922337203685477;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
const ll maxN = (ll)1e5 + 5;
const ll LIM = (ll)1e18;
using namespace std;
vector<bool>isprime(maxN, true);
vector<ll>primes;
void sieve() {
  isprime[0] = isprime[1] = false;
  for (ll i = 2; i * i < maxN; ++i) {
    if (isprime[i]) {
      for (ll j = 2 * i; j < maxN; j += i) {
        isprime[j] = false;
      }
    }
  }
  for (ll i = 1; i < maxN; ++i) {
    if (isprime[i])
      primes.pb(i);
  }
}
int main() {
  fastio;
  sieve();
  ll t = 0;
  cin >> t;
  while (t--) {
    ll n = 0;
    cin >> n;
    ll a = upper_bound(primes.begin(), primes.end(), n) - primes.begin();
    ll b = lower_bound(primes.begin(), primes.end(), primes[a] + n) - primes.begin();
    ll ans = (primes[a] * primes[b]);
    cout << ans << "\n";
  }
}