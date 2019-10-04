#include"bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	ll n = 0, l = 0;
	cin >> n >> l;
	vector<ll>v(n);
	for (ll i = 0; i < n; ++i)
	{
		cin >> v[i];	
	}
	sort(v.begin(), v.end());

	ll f = 0;
	ll maxm = INT_MIN;

	for (ll i = 0; i < n-1; ++i)
	{
		if (v[i + 1] - v[i] > maxm)
			maxm = v[i + 1] - v[i];
	}
	ll a = 2*max(v[0], l - v[n - 1]);
	ll res = max(a, maxm);
	printf("%.10f\n", res / 2.0);

	return 0;
}