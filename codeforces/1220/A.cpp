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
	ll n = 0;
	cin >> n;
	string s;
	cin >> s;
	ll cn = 0, cz = 0;
	for (ll i = 0; s[i]; ++i)
	{
		if (s[i] == 'n')
			cn++;
		else if (s[i] == 'z')
			cz++;

	}
	for (ll i = 0; i < cn; ++i)
		cout << 1 << " ";
	for (ll i = 0; i < cz; ++i)
		cout << 0 << " ";
	
	return 0;
}
