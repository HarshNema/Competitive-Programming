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
    ll n=0,m=0;
    cin>>n>>m;
    ll ar[n][m];
    ll r[n]={0},c[m]={0};
    for(ll i=0;i<n;++i){
        for(ll j=0;j<m;++j){
            cin>>ar[i][j];
            if(ar[i][j]==1){
                r[i]=1,c[j]=1;
            }
        }
    }
    ll cr=0,cc=0;
    for(ll i=0;i<n;++i)
        if(!r[i]) ++cr;
    for(ll i=0;i<m;++i)
        if(!c[i]) ++cc;
    ll minm=min(cr,cc);
    if(minm%2==0)
        cout<<"Vivek\n";
    else
        cout<<"Ashish\n";
  }
  return 0;
}
