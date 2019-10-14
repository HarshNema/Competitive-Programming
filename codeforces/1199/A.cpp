#include "bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fastio;
	int n = 0, x = 0, y = 0;
	cin >> n >> x >> y;
	vector<ll>v(n);
	for (ll i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		int curr = v[i];
		bool d = 1;
		for (int j = max(0, i - 1); j >= max(0, i - x); j--)
		{
			if (v[j] < curr)
			{
				d = 0;
				break;
			}
		}
		if (d == 0)
			continue;
		d = 1;
		for (int j = i + 1; j <= min(n - 1, i + y); j++)
		{
			if (curr > v[j])
			{
				d = 0;
				break;
			}
		}
		if (d == 0)
			continue;

		ans = i;
		break;

	}
	cout << ans + 1;
}
