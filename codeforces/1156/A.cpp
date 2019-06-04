#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	cin >> n;
	int ar[n];
	int c = 0;
	int f = 1;
	for (int i = 0; i < n; ++i)
	{
		cin >> ar[i];
	}
	for (int i = 0; i < n - 1; ++i)
	{
		if (ar[i] + ar[i + 1] == 3)
			c += 3;
		else if (ar[i] + ar[i + 1] == 4)
			c += 4;
		else if (ar[i] + ar[i + 1] == 5)
		{
			f = 0;
			break;
		}
	}
	
	if (f == 0)
		cout << "Infinite";
	else
	{
		for (int i = 0; i < n - 2; ++i)
		{
			if (ar[i] == 3 && ar[i + 1] == 1 && ar[i + 2] == 2)
				c--;
		}
		cout << "Finite\n";
		cout << c;
	}
	return 0;
}