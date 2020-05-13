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
        ll i=0,j=n-1;
        ll a=0,b=0;
        ll curr=0,prev=0,alter=1,moves=0;
        while(i<=j){
          ++moves;
          curr=0;
          if(alter){
            while(curr<=prev and i<=j) curr+=v[i],++i;
            prev=curr;
            a+=curr;
          }
          else{
            while(curr<=prev and i<=j) curr+=v[j],--j;
            prev=curr;
            b+=curr;
          }
          alter^=1;
        }
        assert(moves<=n);
        cout<<moves<<" "<<a<<" "<<b<<"\n";
    }
    return 0;
}
