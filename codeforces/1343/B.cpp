// author:  Harsh Nema
#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 10000000000000;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main()
{
    fastio;
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0;
        cin>>n;
        bool f=false;
        if(n%2==0 and (n/2)%2==0){
            f=true;
        }
        if(f){
            cout<<"YES\n";
            n/=2;
            ll s=0;
            for(ll i=1;i<=n;++i){
                s+=(2*i);
                cout<<2*i<<" ";
            }
            ll s1=0;
            for(ll i=1;i<=n-1;++i){
                cout<<2*i-1<<" ";
                s1+=2*i-1;
            }
            cout<<s-s1<<"\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
