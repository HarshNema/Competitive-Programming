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
    ll n=0;
    cin>>n;
    priority_queue<ll>q;
    ll x=0;
    for(ll i=0;i<n;++i){
        cin>>x;
        q.push(x);
    }
    ll ans=0;
    while(q.size()>=2){
        ll a=q.top();
        q.pop();
        ll b=q.top();
        q.pop();
        ans+=(a+b);
        q.push(a+b);
    }
    ll a=q.top();
    ans+=a;
    q.pop();
    assert(q.empty());
    cout<<ans;
    return 0;
}
