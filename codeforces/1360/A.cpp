#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define maxN 100007
using namespace std;
int main()
{
    fastio;
    ll t=0;
    cin>>t;
    while(t--){
        ll a=0,b=0;
        cin>>a>>b;
        ll ans=0;
        ll side=2*min(a,b);
        if(side>=max(a,b))
            ans=side*side;
        else
            ans=max(a,b)*max(a,b);
        cout<<ans<<"\n";
    }
    return 0;
}

