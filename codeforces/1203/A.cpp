#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0;
		cin >> n;
		vector<ll>v(n);
		ll pos = -1;
		for (ll i = 0; i < n; ++i)
		{
			cin >> v[i];
			if (v[i] == 1)
				pos = i;
		}
		ll l = 1, r = 1;
		for (ll i = 0; i < n; ++i)
		{
			if (v[(pos + n - i) % n] != i + 1)
				l = 0;
			if (v[(pos + i + n) % n] != i + 1)
				r = 0;
		}
		if (l || r)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
