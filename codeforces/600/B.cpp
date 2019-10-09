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
	vector<ll>a(n);
	vector<ll>b(m);
	for (ll i = 0; i < n; ++i)
		cin >> a[i];
	for (ll i = 0; i < m; ++i)
		cin >> b[i];
	sort(a.begin(), a.end());
	ll c = 0;
	ll mid = 0;
	for (ll i = 0; i < m; ++i)
	{
		ll l = 0, r = n - 1;
		ll c = 0;
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (b[i] >= a[mid])
			{
				c = mid + 1;
				l = mid + 1;
			}
			else
				r = mid - 1;
		}
		cout << c << " ";
	}
	

	return 0;
}