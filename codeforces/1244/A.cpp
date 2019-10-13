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
		ll a = 0, b = 0, c = 0, d = 0, k = 0;
		cin >> a >> b >> c >> d >> k;
		int x = 0, y = 0;
		x = a / c;
		y = b / d;
		if (x == 0)
			++x;
		if (y == 0)
			++y;
		if (a >= c && a % c != 0)
			++x;
		if (b >= d && b % d != 0)
			++y;

		if ((x + y) <= k)
			cout << x << " " << y << "\n";
		else
			cout << "-1\n";
	}
	

	return 0;
}