#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	ll n = 0, k = 0;
	cin >> n >> k;
	deque<ll>q;
	ll id = 0;
	for (ll i = 0; i < n; ++i)
	{
		cin >> id;
		if (find(q.begin(), q.end(), id) == q.end())
		{
			if (q.size() < k)
			{
				q.push_front(id);
			}
			else
			{
				q.pop_back();
				q.push_front(id);
			}
		}
		else
			continue;
	}
	cout << q.size() << "\n";
	for (auto i : q)
		cout << i << " ";

	return 0;
}
