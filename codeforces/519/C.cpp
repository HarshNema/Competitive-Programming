#include"bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fastio;
	ll n = 0, m = 0;
	cin >> n >> m;
	if (n >= m / 2 && m >= n / 2)
		cout << (n + m) / 3;
	else if (m < n / 2)
		cout << m;
	else if (n < m / 2)
		cout << n;

	return 0;
}