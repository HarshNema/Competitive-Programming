#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	ll n = 0, m = 0;
	cin >> n >> m;
	set<string>a;
	set<string>b;
	string s;
	for (ll i = 0; i < n; ++i)
	{
		cin >> s;
		a.insert(s);
	}
	ll c = 0;
	for (ll i = 0; i < m; ++i)
	{
		cin >> s;
		b.insert(s);
		
	}
	for (auto i : a)
	{
		if (b.find(i) != b.end())
			++c;
	}
	//cout << a.size() << " " << b.size() << "\n";
	if (n == m) 
	{
		if (c % 2)
			cout << "YES\n";
		else 
			cout << "NO\n"; 
	}
	else  if (n < m) 
		cout << "NO\n";
	else
		cout << "YES\n";

	return 0;
}
