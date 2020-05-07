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
        ll a=0,b=0,x=0,y=0;
        cin>>a>>b>>x>>y;
        ll s1=a+x;
        ll s2=a+y;
        ll s3=b+x;
        ll s4=b+y;
        if((b==s1 and b==y) or (s2==b and b==x) or (s3==a and a==y) or (s4==a and x==a)) cout<<"Yes\n";
        else cout<<"No\n"; 
    }
    return 0;
}
