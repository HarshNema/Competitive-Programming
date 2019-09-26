#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	ll n = 0;
	cin >> n;
	string s;
	cin >> s;
	ll c = 0;
	ll ans = 0;

	for (ll i = 0; s[i]; ++i)
	{
		if (s[i] == '8')
			++c;
	}
	if (n < 11)
		ans = 0;
	else
	{
		ans = min(c, n / 11);
	}
	cout << ans;

}