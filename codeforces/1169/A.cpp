#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n = 0, a = 0, x = 0, b = 0, y = 0;
	cin >> n >> a >> x >> b >> y;
	while (a != x && b != y)
	{
		if (a == b)
		{
			cout << "YES\n";
			return 0;
		}
		a++;
		b--;
		if (a > n)
			a = 1;
		if (b < 1)
			b = n;
		if (a == b)
		{
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
return 0;
}