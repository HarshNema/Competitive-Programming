#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) 
	{
		ll n, k;
		cin >> n >> k;
		if (k == 1)
		{
			cout << n << endl;
			continue;
		}
		else
		{
			ll a = 0;
			while (n != 0)
			{
				a += n % k;
				n -= (n % k);
				if (n != 0)
					a++;
				n = n / k;
			}
			cout << a << endl;
		}
	}
	return 0;
}