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
    int q = 0, typ = 0, m = 0, ct = 0;
    cin >> q;
    map<int, int> mp;
    auto cmp = [&](pair<int, int> a, pair<int, int> b)
    {
        if (a.fi == b.fi)
            return (a.se < b.se);
        return a.fi > b.fi;
    };
    set<pair<int, int> , decltype(cmp)> s(cmp);
    while (q--)
    {
        cin >> typ;
        if (typ == 1)
        {
            cin >> m;
            ++ct;
            mp[ct] = m;
            s.insert({m, ct});
        }
        else if (typ == 2)
        {
            auto x = mp.begin();
            mp.erase(x);
            cout << (*x).fi << " ";
            s.erase(s.find({(*x).se, (*x).fi}));
        }
        else
        {
            auto x = s.begin();
            s.erase(x);
            cout << (*x).se << " ";
            mp.erase((*x).se);
        }
    }
}