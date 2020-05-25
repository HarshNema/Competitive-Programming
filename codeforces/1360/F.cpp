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
        ll n=0,m=0;
        cin>>n>>m;
        string ar[15];
        for(ll i=1;i<=n;++i)
            cin>>ar[i];
        string ans="-1";
        for(ll i=0;i<m;++i){
            string s=ar[1];
            if(ans!="-1") break;
            for(ll j='a';j<='z';++j){
                bool f=false;
                s[i]=j;
                for(ll k=1;k<=n;++k){
                    ll different=0;
                    for(ll curr=0;curr<m;++curr)
                        if(s[curr]!=ar[k][curr]) ++different;
                    if(different>=2){
                        f=true;
                        break;
                    }
                }
                if(!f){
                    ans=s;
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
} 

