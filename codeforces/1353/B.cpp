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
       vector<ll>a(n),b(n);
       for(ll i=0;i<n;++i) cin>>a[i];
       for(ll i=0;i<n;++i) cin>>b[i];
       sort(a.begin(), a.end());
       sort(b.begin(),b.end(),greater<ll>());
       ll ans=0;
       for(ll i=0;i<n;++i){
        if(k){
            if(a[i]>=b[i]) ans+=a[i];
            else{
                --k;
                ans+=b[i];
            }
        }
        else ans+=a[i];
       }
       cout<<ans<<"\n";
    }
    return 0;
} 

