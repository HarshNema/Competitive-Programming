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
int main(){
  fastio;
  ll t=0;
  cin>>t;
  while(t--){
    ll n=0;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;++i) cin>>v[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;++i)
      for(ll j=0;j<n;++j)
        if(i!=j)
          ++mp[v[i]^v[j]];
    ll ans=0;
    bool possible=false;
    for(auto i:mp){
      if(i.S==n){
        possible=true;
        ans=i.F;
        break;
      }
    }
    if(!possible) cout<<"-1\n";
    else cout<<ans<<"\n";
  }
  return 0;
}
