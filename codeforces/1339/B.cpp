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
void solve(){
    ll n=0;
    cin>>n;
    ll ar[n]={0};
    ll ans[n]={0};
    for(ll i=0;i<n;++i)
        cin>>ar[i];
   sort(ar,ar+n);
   ll j=n-1,i=0;
   while(i<n/2){
    ans[j]=ar[n-1-i];
    --j;
    ans[j]=ar[i];
    --j;
    ++i;
   }
   if(n&1){
    ans[j]=ar[n/2];
   }
   for(auto i:ans) cout<<i<<" ";
   cout<<"\n";

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
