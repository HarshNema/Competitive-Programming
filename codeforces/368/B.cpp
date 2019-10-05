#include"bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fastio;
	ll n = 0, m = 0;
	cin >> n >> m;

	vector<ll>dp(n + 1);
	dp[n] = 0;
	vector<ll>a(n);
	set<ll>s;

	for (ll i = 0; i < n; ++i)
		cin >> a[i];

	for (ll i = n - 1; i >= 0; --i)
	{
		s.insert(a[i]);
		dp[i] = s.size();
	}
	ll x = 0;
	while (m--)
	{
		cin >> x;
		cout << dp[x - 1] << "\n";
	}

	return 0;
}