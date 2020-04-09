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
        ll a[n],b[n];;
        for(ll i=0;i<n;++i)
            cin>>a[i];
        for(ll i=0;i<n;++i)
            cin>>b[i];
        bool one=false,negone=false,possible=true;
        for(ll i=0;i<n;++i){
            if(b[i]>a[i] && !one){
                possible=false;
                break;
            }
            else if(b[i]<a[i] && !negone){
                possible=false;
                break;
            }
            if(a[i]== -1) negone=true;
            if(a[i]== 1) one=true;
        }
        if(possible)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
