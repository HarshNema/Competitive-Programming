#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 10000000000000;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main()
{
    fastio;
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0,m=0;
        cin>>n>>m;
        if((n>=2 and m>=3) or (n>=3 and m>=2)) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
