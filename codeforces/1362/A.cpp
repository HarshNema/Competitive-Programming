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
    ll a=0,b=0;
    cin>>a>>b;
    ll moves=0  ;
    bool possible=true;
    if(b>a) swap(a,b);
    if(a%b!=0)
      possible=false;
    else{
      while(a%8==0 and a/8>=b){
        a/=8,++moves;
      }
      while(a%4==0 and a/4>=b){
        a/=4,++moves;
      }
      while(a%2==0 and a/2>=b){
        a/=2,++moves;
      }
    }
    if(a!=b) possible=false;
    if(possible) cout<<moves<<"\n";
    else cout<<"-1\n";
  }
  return 0;
}
