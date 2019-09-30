#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	
	ll a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	a = a % b;

	for (ll i = 1; i <= b; ++i)
	{
		a = a * 10;
		if (a / b == c)
		{
			cout << i ;
			return 0;
				
		}
		a = a % b;
		
	}
	cout<<"-1"<<"\n";

	return 0;

}