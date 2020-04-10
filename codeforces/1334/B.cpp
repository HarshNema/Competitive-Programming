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
        ll n=0,x=0;
        cin>>n>>x;
        vector<ll>v(n,0);
        for(ll i=0;i<n;++i)
            cin>>v[i];
        double average=0.0;
        ll ans=0;
        sort(v.begin(),v.end(),greater<ll>());
        ll s=0;
        for(ll i=0;i<n;++i){
            s+=v[i];
            average=double(s/(i+1));
            if(average<x)
                break;
            ++ans;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
