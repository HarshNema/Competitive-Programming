#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	ll n = 0, d = 0;
	cin >> n >> d;
	vector<ll>v(n);
	ll s = 0;
	for (ll i = 0; i < n; ++i)
	{
		cin >> v[i];
		s += v[i];
	}
	//cout << s + ((n - 1) * 10) << "\n";
	if (s + ((n - 1) * 10) > d)
	{
		cout << "-1";
		return 0;
	}
	else
	{
		cout << (d - s) / 5;
	}
	return 0;

}