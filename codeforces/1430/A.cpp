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
const ll maxN = (ll)1e3 + 5;
using namespace std;
int main() {
	fastio;
	ll t = 0;
	cin >> t;
	while (t--) {
		ll n = 0;
		cin >> n;
		if (n % 3 == 0)
			cout << n / 3 << " 0 0\n";
		else if (n % 3 == 1 && n >= 7)
			cout << n / 3 - 2 << " 0 1\n";
		else if (n % 3 == 2 && n >= 5)
			cout << n / 3 - 1 << " 1 0\n";
		else
			cout << -1 << "\n";
	}
}