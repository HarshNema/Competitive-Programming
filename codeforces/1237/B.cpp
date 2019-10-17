#include "bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
#define mp make_pair
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
/*ll gcd(ll a, ll b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}*/

int main()
{
	fastio
	ll n = 0;
	cin >> n;
	ll a = 0;
	queue<ll>q;
	for (ll i = 0; i < n; ++i)
	{
		cin >> a;
		q.push(a);

	}
	bool vis[100007] = { false };
	ll ans = 0;
	for (ll i = 0; i < n; ++i)
	{
		cin >> a;
		while (vis[q.front()] == 1)
		{
			q.pop();
			//cout << a <<"  "<< i << "\n";
		}
		if (q.front() != a)
			++ans;
		vis[a] = true;
	}
	cout << ans << "\n";
	return 0;
}
