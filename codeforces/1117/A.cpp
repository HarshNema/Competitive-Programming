#include"bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
	fastio;
	ll n = 0;
	cin >> n;
	vector<ll>v(n);
	ll maxm = INT_MIN;
	for (ll i = 0; i < n; ++i)
	{
		cin >> v[i];
		maxm = max(v[i], maxm);
	}
	ll l = 0;
	ll c = 0;
	for (ll i = 0; i < n; ++i)
	{
			
		if (v[i] == maxm)
			c++;
		else
			c = 0;
	
		l = max(l, c);
	}
	cout << l ;
	
	return 0;
}