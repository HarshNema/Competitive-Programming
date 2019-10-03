#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	ll n = 0, k = 0;
	cin >> n >> k;
	ll id = 0;
	set<ll>s;
	queue<ll>q;
	for (ll i = 0; i < n; ++i)
	{
		cin >> id;
		if(!s.count(id))
		{
			if (q.size() >= k)
			{
				ll t = q.front();
				s.erase(t);
				q.pop();
			}
			s.insert(id);
			q.push(id);
		}

	}
	cout << q.size() << "\n";
	vector<ll>v;
	while (!q.empty())
	{
		v.push_back(q.front());
		q.pop();
	}
	reverse(v.begin(), v.end());
	for (auto i : v)
		cout << i << " ";
	return 0;
}
