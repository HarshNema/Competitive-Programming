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
vector<ll>level[200007];
vector<ll>adj[200007];
vector<bool>vis(200007,false);
vector<ll>newl(200007,0);
vector<ll>child(200007,0);
int main()
{
    fastio;
    ll n=0,k=0;
    cin>>n>>k;
    queue<ll>q;
    q.push(1);
    vis[1]=true;
    for(ll i=0;i<n-1;++i){
        ll x=0,y=0;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ll j=0;
    while(!q.empty()){
        ll s=q.size();
        for(ll l=0;l<s;++l){
            ll f=q.front();
            level[j].pb(f);
            newl[f]=j;
            for(auto i:adj[f]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=true;
                }
            }
            q.pop();
        }
        ++j;
    }
    ll last=j-1;
    for(ll i=last;i>=0;--i){
        for(auto j:level[i]){
            for(auto l:adj[j]){
                if(newl[j]<newl[l])
                    child[j]+=child[l]+1;
            }
        }
    }
    ll total=0;
    ll i=1;
    while(i<=n){
        child[i]=child[i]-newl[i];
        ++i;
    }
    sort(child.begin()+1,child.begin()+n+1);
    i=n;
    while(i>k){
        total+=child[i];
        --i;
    }
    cout<<total;

    return 0;
}
