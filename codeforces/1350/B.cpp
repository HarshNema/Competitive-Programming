#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
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
        vector<ll>v(n+1,0);
        vector<ll>ans(n+1,1);
        for(ll i=1;i<=n;++i) cin>>v[i];
        ll i=n/2;
        while(i>=1){
            ll j=2;
            while(i*j<=n){
                if(v[i*j]>v[i] and ans[i*j]+1>ans[i]){
                    ans[i]=ans[i*j]+1;
                }
                ++j;
            }
            --i;
        }
        ll m=0;
        for(ll i=1;i<=n;++i){
            m=max(m,ans[i]);
        }
        cout<<m<<"\n";
    }
    return 0;
}
