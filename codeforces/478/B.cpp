#include "bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
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
	fastio;
	ll m = 0, n = 0;
	cin >> n >> m;
	ll a = n / m;
	ll minm = 0;
	minm = (n % m) * a * (a + 1) / 2;
	minm += (m - n % m) * a * (a - 1) / 2;
	ll b = n - m + 1;
	ll maxm = b * (b - 1) / 2;
	cout << minm << " " << maxm;

	return 0;
}
