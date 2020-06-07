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
  ll t=0;
  cin>>t;
  while(t--){
    ll sa=0,sb=0;
    ll n=0;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;++i) cin>>a[i],sa+=a[i];
    for(ll i=0;i<n;++i) cin>>b[i],sb+=b[i];
    bool possible=true;
    if(sb==0 or sb==n){
        for(ll i=0;i<n-1;++i){
            if(a[i+1]<a[i]){
                possible=false;
                break;
            }
        }
    }
    if(!possible) cout<<"No\n";
    else cout<<"Yes\n";
  }

  return 0;
}
