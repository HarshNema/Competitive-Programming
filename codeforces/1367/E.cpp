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
ll gcd(ll a, ll b){
 if (a == 0)
     return b;
 else
     return gcd(b % a, a);
}
int main(){
  fastio;
  ll t=0;
  cin>>t;
  while(t--){
    ll n=0,k=0;
    cin>>n>>k;
    string s;
    cin>>s;
    ll freq[26]={0};
    for(ll i=0;i<s.length();++i)
      ++freq[s[i]-'a'];
    //fill(s.begin(), s.end(), '#');
    ll maxm=1;
    for(ll i = 1; i <= n;++i){
      ll sum = 0;
      ll g = gcd(i,k);
      ll x = i/g;
      for(ll j=0; j<26; ++j)
        sum += freq[j]/x;
      if(sum >= gcd(i,k))
        maxm=i;
    }
    cout<<maxm<<"\n";
  }
  return 0;
}
