#include"bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fastio;
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0;
		cin >> n;
		string s;
		cin >> s;
		ll c1 = 0, c0 = 0;
		ll ans = 0;
		for (ll i = 0; s[i]; ++i)
		{
			if (s[i] == '1')
				c1++;
			else
				c0++;
		}
		if (c1 == n || s[0] == '1' || s[n - 1] == '1')
			ans = 2 * n;
		else if (c0 == n)
			ans = n;
		else
		{
			ll ans1 = 0, ans2 = 0;
			ll i = 0;
			for (i = 0; s[i]; ++i)
			{
				if (s[i] == '1')
					break;
			}
			ans1 = 2 * (n - i);
			for (i = n - 1; s[i]; --i)
			{
				if (s[i] == '1')
					break;
			}
			ans2 = 2 * (i + 1);
			ans = max(ans1, ans2);
		}
		
		cout << ans << "\n";
	}
	return 0;
}