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
        ll c=0;
        while(n>=2){
            ll i=1,used=0;
            while(used<n){
                used+=(3*i-1);
                if(used>n) break;
                ++i;
            }
            if(used>n) used-=(3*i-1);
            ++c;
            n-=used;
        }
        cout<<c<<"\n";
    }
    return 0;
}
