#include "bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fastio;
	int t = 0;
	cin >> t;
	while (t--)
	{
		ll n = 0, s = 0, t = 0;
		cin >> n >> s >> t;
		cout << max((n - s), (n - t)) + 1<<"\n";

	}
	return 0;

}
	