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
	for (ll i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		ll a = s.length();
		if (a > 10)
		{
			cout << s[0] << a - 2 << s[a-1] << "\n";
		}
		else
			cout << s << "\n";
	}
}
