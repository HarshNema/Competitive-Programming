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
    string s;
    cin>>s;
    string ans="";
    ans.pb(s[0]);
    for(ll i=1;i<s.length()-1;i+=2) ans.pb(s[i]);
    ans.pb(s[s.length()-1]);
    cout<<ans<<"\n";
  }
  return 0;
}
