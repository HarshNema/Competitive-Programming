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
        ll n=0;
        cin>>n;
        vector<ll>v(n,0);
        for(ll i=0;i<n;++i) cin>>v[i];
        sort(v.begin(), v.end());
        ll ans=INT_MAX;
        for(ll i=0;i<n-1;++i) ans=min(ans,v[i+1]-v[i]);
        cout<<ans<<"\n";
    }
    return 0;
}

