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
    ll m=0,s=0;
    cin>>m>>s;
    bool possible=true;
    if(s>9*m || (s==0 and m!=1))
        possible=false;
    if(s==0 and m==1){
        cout<<"0 0";
        return 0;
    }
    if(!possible){
        cout<<"-1 -1";
        return 0;
    }
    ll smallest[m]={0};
    ll largest[m]={0};
    ll t=s;
    smallest[0]=1;
    --t;
    ll i=m-1;
    while(t>=9){
        smallest[i]=9;
        t-=9;
        --i;
    }
    smallest[i]+=t;
    i=0;
    while(9*(i+1)<=s){
        largest[i]=9;
        ++i;
    }
    assert(possible);
    largest[i]=s-i*9;
    if(possible){
    for(auto i:smallest)
        cout<<i;
    cout<<" ";
    for(auto i:largest)
        cout<<i;
    }
    return 0;
}
