#include<bits/stdc++.h>
#define ll long long int
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
	fastio
		ll n = 0;
	cin >> n;
	ll sum1 = 0;
	ll sum2 = 0;
	vector <ll>a(n);
	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	
	if (n & 1)
		sum2 += a[n / 2];
	for (ll i = 0; i < n / 2; ++i)
	{
		sum2 += a[n - 1 - i];
		sum1 += a[i];
	}
	ll ans = 0;
	ans += (sum1 * sum1) + (sum2 * sum2);
	cout << ans << "\n";

}
