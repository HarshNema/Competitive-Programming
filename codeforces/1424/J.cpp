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
	vector<bool> p(10 * maxn, true);
	p[0] = false; p[1] = false;
	for (int i = 2; i * i < 10 * maxn; ++i)
		if (p[i])
		{
			for (int j = i * i; j < 10 * maxn; j += i)
				p[j] = false;
		}
	vector<int> ans(10 * maxn);
	ans[0] = 0; ans[1] = 1;
	for (int i = 2; i < 10 * maxn; ++i)
	{
		ans[i] = ans[i - 1];
		if (p[i])
			++ans[i];
		else
		{
			int sq = sqrt(i);
			if (sq * sq == i && p[sq])
				--ans[i];
		}
	}
	int t = 0, n = 0;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << ans[n] << "\n";
	}
}