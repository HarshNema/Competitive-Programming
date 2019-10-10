#include"bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
	fastio;
	ll a = 0, b = 0;
	cin >> a >> b;
	ll x = 0, y = 0, z = 0;
	cin >> x >> y >> z;
	ll yc = 0, bc = 0;
	yc += 2*x;
	yc += y;
	bc += y;
	bc += 3 * z;
	a = yc - a;
	if (a < 0)
		a = 0;
	b = bc - b;
	if (b < 0)
		b = 0;
	cout << a + b;

	return 0;
}