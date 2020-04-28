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
        string s;
        cin>>s;
        ll n=s.length();
        ll z=0,o=0;
        for(ll i=0;i<n;++i){
            if(s[i]=='0') ++z;
            else ++o;
        }
        if(s.length()<=2 or (o==0 or o==n)){
            cout<<s<<"\n";
            continue;
        }
        else{
            for(ll i=0;i<n;++i){
                cout<<"10";
            }
            cout<<"\n";
        }
    }
    return 0;
}
