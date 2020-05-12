#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
ll factor(ll n){
    if(n%2==0)
        return 2;
    else{
        ll i=3;
        while(i*i<=n){
            if(n%i==0)
                return i;
            ++i;
        }
    }
    return n;
}
int main()
{
    fastio;
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0,k=0;
        cin>>n>>k;
        ll ans=n+2*(k-1);
        ans+=factor(n);
        cout<<ans<<"\n";
    }
    return 0;
}
