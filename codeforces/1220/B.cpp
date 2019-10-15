#include "bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
	fastio;
	ll n = 0;
	cin >> n ;
	ll ar[n+1][n+1];
	for (ll i = 1; i <= n; ++i)
	{
		for (ll j = 1; j <= n; ++j)
		{
			cin >> ar[i][j];
		}
	}
	for (ll i = 1; i <= n - 2; ++i)
	{
		ll x = (ar[i][i + 1] * ar[i][i + 2]);
		ll a = sqrt(x / ar[i + 1][i + 2]);
		cout << a << " ";
	}
	ll x = ar[n - 1][n - 2] * ar[n - 1][n];
	ll a = sqrt(x / ar[n - 2][n]);
	ll y = ar[n][n - 1] * ar[n][n - 2];
	ll b = sqrt(y / ar[n - 1][n - 2]);
	cout << a << " " << b;
	
	return 0;
}
