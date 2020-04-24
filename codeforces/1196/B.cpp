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
        vector<ll>ar(n);
        for(ll i=0;i<n;++i) cin>>ar[i];
        ll c_sum=0;
        std::vector<ll>pos;
        for(ll i=0;i<n;++i){
            c_sum+=ar[i];
            if(c_sum&1 and k>1) c_sum=0,pos.pb(i+1),--k; 
        }
        //deb(k)
        if(c_sum&1 and k==1){
            cout<<"YES\n";
            pos.pb(n);
            for(auto i:pos) cout<<i<<" ";
            cout<<"\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
