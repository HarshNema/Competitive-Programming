#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	
	ll n, i, j, k, l, sum1 = 0, sum2 = 0;
	cin >> n;
	n = 2 * n;
	vector<long long int>v(n);
	for (i = 0; i < n; i++)
		cin >> v[i];
	
	sort(v.begin(), v.end());

	for (i = 0; i < n / 2; i++)
		sum1 += v[i];

	for (i = n / 2; i < n; i++)
		sum2 += v[i];

	if (sum1 == sum2)
		cout << "-1";
	else
	{
		for (i = 0; i < n; i++)
			cout << v[i] << " ";
	}
return 0;

}