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
        ll n=0,k=0;
        cin>>n>>k;
        ll ar[n]={0};
        for(ll i=0;i<n;++i) cin>>ar[i];
        ll v[n]={0};
        for(ll i=1;i<n-1;++i){
            if(ar[i]>ar[i-1] and ar[i]>ar[i+1])
                v[i]=1;
        }
        ll pre[n]={0};
        for(ll i=1;i<n;++i) pre[i]=pre[i-1]+v[i];
        ll x=-1,y=-1;
        ll i=0;
        while(i<(n+1-k)){
            ll curr=pre[k+i-1];
            if(v[k+i-1]) --curr;
            if(v[i]) --curr;
            if(i!=0) curr-=pre[i-1];
            if(curr>x or (x==-1 and y==-1)) x=curr,y=i;
            ++i;
        }
        ++x,++y;
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}
