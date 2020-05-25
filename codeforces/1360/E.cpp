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
int main()
{
    fastio;
    ll t=0;
    cin>>t;
    while(t--){
      ll n=0;
      cin>>n;
      char ar[n][n];
      for(ll i=0;i<n;++i)
        for(ll j=0;j<n;++j)
            cin>>ar[i][j];
      bool ok=true;
      for(ll i=0;i<n;++i){
        for(ll j=0;j<n;++j){
            if(ar[i][j]=='1'){
            if(i!=n-1 and j!=n-1 and ar[i+1][j]!='1' and ar[i][j+1]!='1'){
                ok=false;
                break;
            }
        }
        }
      }
      if(ok) cout<<"YES\n";
      else cout<<"NO\n";
    }
    return 0;
}

