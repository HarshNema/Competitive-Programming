#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
bool count(int a, int b, int k)
{
	int c = 0;
	for (int i = 0; i < 21; ++i)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
		c++;
	}
	if (c <= k)
		return true;
	else
		return false;
}
int main()
{
	fastio
	int n = 0, m = 0, k = 0;
	cin >> n >> m >> k;
	vector<int>v(m + 1);
	for (int i = 0; i <= m; ++i)
	{
		cin >> v[i];
	}
	int c = 0;
	int a = v[m];
	for (int i = 0; i < m; ++i)
	{
		if (count(v[i], a, k))
			++c;
	}
	cout << c << "\n";
}
