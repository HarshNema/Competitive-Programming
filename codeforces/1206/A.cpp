#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n = 0, m = 0;
	cin >> n;
	vector<ll>a(n);
	
	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cin >> m; 
	vector<ll>b(m);
	for (ll i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	sort(b.begin(), b.end());
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j < m; ++j)
		{
			if (!binary_search(a.begin(), a.end(), a[i] + b[j]) && !binary_search(b.begin(), b.end(), a[i] + b[j]))
			{
				cout << a[i] << " " << b[j];
				return 0;
			}
		}
	}
}