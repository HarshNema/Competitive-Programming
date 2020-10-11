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
		string s;
		cin >> n >> s;
		ll ans = 0, c = 0, i = 0;
		while (i < n) {
			++ans;
			ll j = i + 1;
			while (j < n && s[j] == s[i])
				++j;
			if (j == i + 1)
				c++;
			else {
				c -= (j - i - 2);
				c = max(0ll, c);
			}
			i = j;
			if (c + i >= n)
				break;
		}
		cout << ans << "\n";
	}
}