#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
ll solve(vector<ll>v, ll n)
{
	ll curr = 1;
	ll maxm = 1;
	for (ll i = 1; i < n; ++i)
	{
		if (v[i] > v[i - 1])
		{
			++curr;
			maxm = max(curr, maxm);
		}
		else
		{
			curr = 1;
		}


	}
	return maxm;
}
int main()
{
	fastio;
	ll n = 0;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	cout << solve(v, n);

}
