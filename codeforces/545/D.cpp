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
    ll n=0;
    cin>>n;
    ll ar[n]={0};
    for(ll i=0;i<n;++i) cin>>ar[i];
    sort(ar,ar+n);
    ll ans=0;
    ll s=0;
    for(ll i=0;i<n;++i){
        if(s<=ar[i]) ++ans,s+=ar[i];
    }
    cout<<ans;
    return 0;
}
