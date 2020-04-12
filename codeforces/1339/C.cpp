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
ll fl(ll n){
	ll ans = 0;
	for(ans = 0;(1ll<<ans)<=n;++ans);
	return ans;
}
void solve(){
    ll n=0,ans=0;
    cin>>n;
    ll ar[n]={0};
    for(ll i=0;i<n;++i){
        cin>>ar[i];
    }
    ll j=ar[0];
    for(ll i=1;i<n;++i){
        if(ar[i]>=j) j=ar[i];
        else ans=max(fl(j-ar[i]),ans);
    }
    cout<<ans<<"\n";
}
int main()
{
    fastio;
    ll t=0;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
