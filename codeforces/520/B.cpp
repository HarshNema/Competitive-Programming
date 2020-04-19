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
    ll n=0,m=0;
    cin>>n>>m;
    ll moves=0;
    while(m>n){
        if(m&1)
           ++m;
        else
            m/=2;
        ++moves;
    }
    moves+=(n-m);
    cout<<moves;
    return 0;
}
