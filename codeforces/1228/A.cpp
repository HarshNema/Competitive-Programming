#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)

bool diff(ll n)
{
	set<ll> s;
	while (n)
	{
		ll l = n % 10;
		if (s.find(l) != s.end())
		{
			return false;
		}
		else
		{
			s.insert(l);
			n /= 10;
		}
	}
	return true;
}

int main()
{
	fastio;
	ll l = 0, r = 0;
	cin >> l >> r;
	for (int i = l; i <= r; ++i)
	{
		if (diff(i))
		{
			cout << i<<"\n";
			return 0;
		}
	}
	cout << "-1"<<"\n";

return 0;

}
