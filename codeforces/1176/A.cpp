#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll q=0;
	cin >> q;
	while (q--) 
	{
		ll n;
		cin >> n;
		ll count = 0;
		bool flag = false;
		while (n != 1) 
		{
			if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
			{
				flag = true;
				break;
			}

			if (n % 5 == 0)
				n /= 5, n *= 4;
			else if (n % 3 == 0)
				n /= 3, n *= 2;
			else
				n /= 2;
			count++;
		}

		if (flag)
			cout << -1 << endl;
		else
			cout << count << endl;
	}

return 0;

}