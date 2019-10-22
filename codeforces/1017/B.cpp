#include<bits/stdc++.h>
#define ll long long int
const ll mod = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
//ll gcd(ll a, ll b)
//{
//	if (a == 0)
//		return b;
//	else
//		return(b % a, a);
//}

int main()
{
	fastio;
	ll n = 0;
	cin >> n;
	ll p1 = 0, p2 = 0, p3 = 0, p4 = 0;
	string a, b;
	cin >> a;
	cin >> b;
	ll ans = 0;
	for (ll i = 0; i < n; ++i)
	{
		if (a[i] == '0' && b[i] == '0')
			++p1;
		if (a[i] == '0' && b[i] == '1')
			++p2;
		if (a[i] == '1' && b[i] == '0')
			++p3;
		if (a[i] == '1' && b[i] == '1')
			++p4;
	}
	ans = p1 * p3 + p1 * p4 + p2 * p3;
	cout << ans;
	return 0;
}