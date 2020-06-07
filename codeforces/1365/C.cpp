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
#define maxN 200007
using namespace std;
int main(){
  fastio;
  ll n=0;
  cin>>n;
  ll a[n],b[n];
  map<ll,ll>pos;
  map<ll,ll>mp;
  for(ll i=0;i<n;++i) cin>>a[i];
  for(ll i=0;i<n;++i) cin>>b[i],pos[b[i]]=i;
  for(ll i=0;i<n;++i){
    if(pos[a[i]]<=i)
        ++mp[i-pos[a[i]]];
    else
        ++mp[n+i-pos[a[i]]];
  }
  ll maxm=0;
  for(auto i:mp) maxm=max(maxm,i.S);
  cout<<maxm;


  return 0;
}
