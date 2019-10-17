#include "bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
#define mp make_pair
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
/*ll gcd(ll a, ll b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}*/

int main()
{
	fastio
	ll t = 0;
	cin >> t;
	while (t--) 
	{
		ll x = 0, y = 0, z = 0;
		cin >> x >> y >> z;
		ll c = 0;
		ll m = min(z / 2, y);
		z -= 2 * m;
		y -= m;
		c += 3 * m;
		m = min(y / 2, x);
		c += 3 * m;
		y = y - 2 * m;
		x = x - m;
		cout << c << "\n";
	}
	return 0;
	
}
