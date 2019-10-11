#include"bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fastio;
	ll n = 0, m = 0, k = 0;
	cin >> n >> m >> k;
	if (m >= n && k >= n)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}