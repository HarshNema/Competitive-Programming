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
    int t = 0;
    cin >> t;
    while (t--)
    {
        vector<int> c(3);
        for (auto &i : c)
            cin >> i;
        vector<int> a(5);
        for (auto &i : a)
            cin >> i;
        if (a[0] > c[0] || a[1] > c[1] || a[2] > c[2])
        {
            cout << "NO\n"; continue;
        }
        c[0] -= a[0]; c[1] -= a[1]; c[2] -= a[2];
        if (a[3] <= c[0] && a[4] <= c[1])
        {
            cout << "YES\n"; continue;
        }
        if (a[3] <= c[0] && a[4] <= c[1] + c[2])
        {
            cout << "YES\n"; continue;
        }
        if (a[4] <= c[1] && a[3] <= c[0] + c[2])
        {
            cout << "YES\n"; continue;
        }
        if (a[3] > c[0])
            a[3] -= c[0];
        if (a[4] > c[1])
            a[4] -= c[1];
        cout << (a[3] + a[4] <= c[2] ? "YES\n" : "NO\n");
    }
}