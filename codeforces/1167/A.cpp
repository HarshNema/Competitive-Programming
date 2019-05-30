#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 0;
	cin >> t;

	while (t--)
	{
		int n = 0;
		cin >> n;
		int f = 0;
		string s;
		cin>>s;
		for (int i = 0; i < n; ++i)
		{
			if (s[i] == '8' && (i + 10 <= n - 1))
			{
				f = 1;
				break;
			}
		}
		if (f == 0)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
return 0;
}