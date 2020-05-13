//author: Harsh Nema
#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
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
      for(ll i=0;i<n;++i) cin>>v[i];
      bool present[8007]={0};
      for(ll i=0;i<n-1;++i){
        ll curr=v[i];
        for(ll j=i+1;j<n;++j){
          curr+=v[j];
          if(curr>n) break;
          else present[curr]=1;
        }
      }
      ll c=0;
      for(ll i=0;i<n;++i){
        if(present[v[i]]) ++c;
      }
      cout<<c<<"\n";
    }
    return 0;
}
