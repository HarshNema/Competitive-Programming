// author:  Harsh Nema
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
        ll n=0,a=0,b=0,c=0,d=0;
        cin>>n>>a>>b>>c>>d;
        ll x=n*(a-b),y=n*(a+b);
        if((c+d)<x or (c-d)>y) cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}
