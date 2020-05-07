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
        vector<ll>v(n,0);
        set<ll>s;
        for(ll i=0;i<n;++i) cin>>v[i];
        for(ll i=0;i<n;++i){
            ll x=v[i]+i;
            x%=n;
            if(x<0) x+=n;
            s.insert(x);
        }
        if(s.size()==n) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
