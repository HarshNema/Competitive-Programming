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
	ll s = 0, v1 = 0, v2 = 0, t1 = 0, t2 = 0;
	cin >> s >> v1 >> v2 >> t1 >> t2;
	ll a = 2 * t1 + s * v1;
	ll b = 2 * t2 + s * v2;
	if (b > a)
		cout << "First";
	else if (a > b)
		cout << "Second";
	else
		cout << "Friendship";
	return 0;
}
