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
       ll n=0,k=0;
       cin>>n>>k;
       ll ans=0,fac=0;
       for(ll i=1;i*i<=n;++i){
        if(n%i==0){
            if(i<=k) fac=max(fac,i);
            if(n/i<=k) fac=max(fac,n/i);
        }
       }
       cout<<n/fac<<"\n";
    }
    return 0;
}

