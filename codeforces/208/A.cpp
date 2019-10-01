#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fastio;
	string s;
	ll n = 0;
	cin >> s;
	string ans="";
	n = s.length();
	for(ll i=0;i<n;++i)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            ans+=' ';
            i+=2;
        }
        else
        {
            ans+=s[i];
        }
    }
    ll c=0;
    for(ll i=0;i<ans.length();++i)
    {
        if(ans[i]==' ')
            ++c;
        else
            break;

    }
    for(ll i=c;i<ans.length();++i)
    {
        cout<<ans[i];
    }
return 0;
}
