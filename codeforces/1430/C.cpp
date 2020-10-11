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
		priority_queue<ll>q;
		vector<pair<ll, ll>>v;
		for (ll i = 1; i <= n; ++i)
			q.push(i);
		while (q.size() >= 2) {
			ll a = q.top();
			q.pop();
			ll b = q.top();
			q.pop();
			q.push((a + b + 1) / 2);
			v.pb({a, b});
		}
		cout << q.top() << "\n";
		for (auto i : v)
			cout << i.F << " " << i.S << "\n";
	}
}