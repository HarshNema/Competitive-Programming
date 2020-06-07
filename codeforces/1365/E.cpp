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
#define maxN 503
using namespace std;
int main(){
  fastio;
  ll n=0;
  cin>>n;
  ll v[maxN];
  for(ll i=0;i<n;++i) cin>>v[i];
  ll ans=0;
  if(n<=3){
    ans=v[0];
    for(ll i=0;i<n;++i){
       ans|=v[i];
    }
  }
  else{
    for(ll i=0;i<n;++i){
        for(ll j=1;j<n;++j){
            for(ll k=1;k<n;++k)
                ans=max(ans,v[i]|v[j]|v[k]);
        }
    }
  }
  cout<<ans;
}
