#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t = 0;
	cin >> t;
	while (t--)
	{
		ll b = 0, p = 0, f = 0;
		ll h = 0, c = 0;
		cin >> b >> p >> f;
		cin >> h >> c;
		ll ph = 0, pc = 0;
		if (h > c)
		{
			while (p && b)
			{
				if (b < 2)
					break;
				else
				{
					ph += h;
					b = b - 2;
				}
				p--;
			}
			while (f && b)
			{
				if (b < 2)
					break;
				else
				{
					pc += c;
					b = b - 2;
				}
				f--;

			}
		}
		else
		{
			while (f && b)
			{
				if (b < 2)
					break;
				else
				{
					pc += c;
					b = b - 2;
				}
				f--;

			}
			while (p && b)
			{
				if (b < 2)
					break;
				else
				{
					ph += h;
					b = b - 2;
				}
				p--;
			}




		}
		cout << ph + pc << "\n";
	}
}
