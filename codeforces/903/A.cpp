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
		ll a = n % 3;
		ll b = n % 7;
		if (a == 0 || b == 0)
		{
			cout << "YES\n";
		}
		else if (a % 7 == 0 || b % 3 == 0)
		{
			cout << "YES\n";
		}
		else
		{
			ll x = n;
			ll p = 0, q = n;
			ll f = 0;
			while (x)
			{
				p++;
				q--;
				if ((p % 3 == 0 && q % 7 == 0) || (q % 3 == 0 && p % 7 == 0))
				{
					f = 1;
					break;
				}
				x--;
			}
			if (f == 1)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
	return 0;
}