//author: Harsh :)
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
    vector<ll>ar(n);
    ll o=0,e=0;
    for(ll i=0;i<n;++i) cin>>ar[i];
    bool possible=true;
    for(ll i=0;i<n;++i){
      if(ar[i]&1) ++o;
      else ++e;
    }
    if(floor(n/2)!=o) possible=false;
    ll bad=0;
    for(ll i=0;i<n;++i)
      bad +=(ar[i]%2 != i%2);
    if(possible) cout<<bad/2<<"\n";
    else cout<<"-1\n";
  }
  return 0;
}
