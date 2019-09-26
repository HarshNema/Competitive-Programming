#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	ll n = 0, k = 0;
	cin >> n >> k;
	while (k)
	{
		if (n % 10 != 0)
			--n;
		else
			n /= 10;
		--k;
	}
	cout << n;

	return 0;
}