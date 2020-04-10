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
        vector<pair<ll,ll>>v(n+1);
        v[0].F=0,v[0].S=0;
        bool possible=true;
        for(ll i=1;i<=n;++i){
            cin>>v[i].F>>v[i].S;
            if(v[i].F<v[i-1].F or v[i].S<v[i-1].S or (v[i].S-v[i-1].S>v[i].F-v[i-1].F))
                possible=false;
        }
        if(possible) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
