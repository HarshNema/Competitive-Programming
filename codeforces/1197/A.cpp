#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fast;
	int t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0;
		cin >> n;
		vector<ll>v(n);
		ll a = 0;
		for (ll i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		ll l2 = v[n - 2];
		ll c = 0;
		while (c < l2-1 && c<(n-2))
		{
			c++;
		}
		cout << c << "\n";


	}
	return 0;
}