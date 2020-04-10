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
        ll n=0;
        cin>>n;
        vector<pair<ll,ll>>v(n);
        ll ans=0;
        for(ll i=0;i<n;++i)
            cin>>v[i].F>>v[i].S;
        for(ll i=0;i<n;++i)
            v[i].S=min(v[(i+1)%n].F,v[i].S);
        ll minm=v[0].S;
        for(ll i=0;i<n;++i){
            minm=min(minm,v[i].S);
            ans+=(v[i].F-v[i].S);
        }
        ans+=minm;
        cout<<ans<<"\n";
    }
    return 0;
}
