#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	ll t = 0;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		if (s[0] == s[s.length() - 1])
			cout << "-1" << "\n";
		else
			cout << s << "\n";
	}
	return 0;
}
