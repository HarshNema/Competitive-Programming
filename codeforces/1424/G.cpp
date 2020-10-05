/*The woods are lovely, dark and deep,
But I have promises to keep,
And miles to go before I sleep,
And miles to go before I sleep.*/

//PRABHJOT SINGH A.K.A. PRABHI
//~~~~~conquizztador~~~~~


#include<bits/stdc++.h>
using namespace std;
using lli = long long int;
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
const int MOD = 1000000007;
const int MOD1 = 998244353;
const int maxn = 100010;
const int lim = (int)1e9;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n = 0, birth = 0, death = 0;
	cin >> n;
	vector<pair<int, int> > vp;
	for (int i = 0; i < n; ++i)
	{
		cin >> birth >> death;
		vp.eb(birth, 1);
		vp.eb(death, 0);
	}
	sort(vp.begin(), vp.end());
	int res = 0, t = 0, year = 0;
	for (auto i : vp)
	{
		if (i.se == 1)
		{
			++t;
			if (res < t)
			{
				res = t; year = i.fi;
			}
		}
		else
			--t;
	}
	cout << year << " " << res;
}