#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fastio
		int n = 0;
	cin >> n;
	if (!(n & 1))
	{
		cout << "NO";
	return 0;
	}
	else
	{
		cout << "YES\n";
		n = 2 * n;
		vector<int>v(n);
		int i = 1;
		int c = 0;
		int a = 0, b = 0;
		while (c < n)
		{
			a = i;
			b = (i + 3) % n;
			if (b == 0)
				b = n;
			cout << a << " " << b << " ";
			i = b + 1;
			c += 2;
		}

	}
	return 0;
}
