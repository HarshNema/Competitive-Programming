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
        ll x=0,y=0,a=0,b=0;
        cin>>x>>y>>a>>b;
        cout<<min(abs(x-y)*a+min(x,y)*b,(x+y)*a)<<"\n";
    }
    return 0;
}
