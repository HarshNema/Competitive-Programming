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

//ll modexp(ll x, ll y, ll p)
//{
//	ll res = 1;      
//	x = x % p;   
//	while (y > 0)
//	{
//		if (y & 1)
//			res = (res * x) % p;
//		y = y >> 1; 
//		x = (x * x) % p;
//	}
//	return res;
//}

//ll sub_mod(ll a, ll b)
//{
//	if (a >= b)
//		return a - b;
//	else
//		return mod - b + a;
//}

//ll add_mod(ll a, ll b)
//{
//	if (0 == b) 
//		return a;
//
//	b = mod - b;
//	if (a >= b)
//		return a - b;
//	else
//		return mod - b + a;
//}

int main()
{
	fastio;
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0;
		cin >> n;
		vector <ll>v(n);
		ll e = 0, o = 0;
		for (ll i = 0; i < n; ++i)
		{
			cin >> v[i];

		}
		bool f = false;
		sort(v.begin(), v.end());
		for (ll i = 0; i < n - 1; ++i)
		{
			if (v[i + 1] - v[i] == 1)
			{
				f = true;
				break;
			}
		}
		if (!f)
			cout << 1 << "\n";
		else
			cout << 2 << "\n";
	}
	return 0;
}