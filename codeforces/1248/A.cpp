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
		ll t = 0;
	cin >> t;
	ll n = 0, m = 0;
	while (t--)
	{
		cin >> n;
		ll e1 = 0, e2 = 0, o1 = 0, o2 = 0;
		vector <ll>v(n);
		for (ll i = 0; i < n; ++i)
		{
			cin >> v[i];
			if (v[i] & 1)
				o1++;
			else
				e1++;
		}
		cin >> m;
		vector<ll>w(m);
		for (ll i = 0; i < m; ++i)
		{
			cin >> w[i];
			if (w[i] & 1)
				o2++;
			else
				e2++;
		}
		ll a = e1 * e2 + o1 * o2;
		cout << a << "\n";
	}
	

}
