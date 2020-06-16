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
ll n=0,k=0,nearest=-INF;
bool check(ll a, ll b){
  return (a-b)>k; 
}
int main(){
  fastio;
  ll t=0;
  cin>>t;
  while(t--){
    nearest=-INF;
    cin>>n>>k;
    string s;
    cin>>s;
    set<ll>pos;
    ll ans=0;
    for(ll i=0;i<n;++i) 
      if(s[i]=='1') 
        pos.insert(i);
    for(ll i=0;i<n;++i){
      if(s[i]=='1')
        nearest=i;
      else{
        auto it = pos.upper_bound(i);
        if(check(i, nearest) and check(*it, i)){
            ++ans;
            nearest=i;
          }
        }
      }
    cout<<ans<<"\n";
  }
  return 0;
}
