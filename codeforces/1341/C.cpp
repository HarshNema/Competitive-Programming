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
        ll ar[n];
        map<ll,ll>mp;
        bool f=false;
        ll pos[n]={0};
        for(ll i=0;i<n;++i) cin>>ar[i],mp[ar[i]]=i;
        ll j=-1;
        for(ll i=1;i<=n;++i){
            ll curr=mp[i];
            if(pos[curr]==1){
                f=true;
                break;
            }
            pos[curr]=1;
            if(j==-1){
                if(curr+1>=n) j=-1;
                else{
                    if(pos[curr+1]==0) j=1+curr;
                    else j=-1;
                }
            }
            else if(curr!=j){
                f=true;
                break;
            }
            else{
                if(curr+1>=n) j=-1;
                else{
                    if(pos[curr+1]==0) j=1+curr;
                    else j=-1;
                }
            }
        }
        if(!f) cout<<"Yes\n";
        else cout<<"No\n";


    }
    return 0;
}
