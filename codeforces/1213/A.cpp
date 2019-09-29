#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	ll n = 0;
	cin >> n;
	ll a = 0;
	ll o = 0;
	for (ll i = 0; i < n; ++i)
	{
		cin >> a;
		if (a % 2 != 0)
			++o;
	}
	cout << min(o, n - o);
	return 0;
}
