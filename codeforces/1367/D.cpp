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
    ll m=0;
    cin>>m;
    ll freq[26]={0};
    for(ll i=0;i<s.length();++i)
      ++freq[s[i]-'a'];
    //fill(s.begin(), s.end(), '#');
    ll b[m]={0};
    ll diff[m]={0};
    vector<bool>used(m,false);
    for(ll i=0;i<m;++i)
      cin>>b[i];
    for(ll i=25;i>=0;--i){
      vector<ll>v;
      for(ll j=0;j<m;++j){
        if(!used[j] and b[j]==diff[j])
          v.pb(j);
      }
      if(freq[i] < v.size()) continue;
        for(auto j:v){
          used[j]=true;
          s[j] = i+'a';
          for(ll k=0;k<m;++k) diff[k]+=abs(k-j);
        }
      }
    //deb(s)
    cout<<s.substr(0,m)<<"\n";
  }
  return 0;
}
