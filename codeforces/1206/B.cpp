#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	ll n = 0;
	cin >> n;
	ll cn = 0, cz = 0;
	ll a = 0;
	ll ans = 0;
	while (n--)
	{
		cin >> a;
		if (a < 0)
			cn++;
		if (a == 0)
			cz++;
		ans += abs(abs(a) - 1);

	}
	if (cn % 2 != 0 && cz < 1)
		ans += 2;
	cout << ans;
	return 0;
}