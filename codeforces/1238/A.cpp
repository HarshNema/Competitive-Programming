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
		ll x = 0, y = 0;
		cin >> x >> y;
		ll d = x - y;
		if (d > 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}