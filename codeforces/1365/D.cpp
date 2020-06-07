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
#define maxN 503
using namespace std;
ll n,m;
char s[53][53];
ll vis[53][53];
//bool check(ll x, ll y, ll n, ll m){
//    if(x>=0 and x<n and y>=0 and y<m)
//        return true;
//    return false;
//}
void dfs(ll x, ll y){
	vis[x][y] = 1;
	if(x!=0 and vis[x-1][y]==0 and (s[x-1][y]=='G' or s[x-1][y]=='.')) dfs(x-1,y);
	if(x!=n-1 and vis[x+1][y]==0 and (s[x+1][y]=='G' or s[x+1][y]=='.')) dfs(x+1,y);
	if(y!=0 and vis[x][y-1]==0 and (s[x][y-1]=='G' or s[x][y-1]=='.')) dfs(x,y-1);
	if(y!=m-1 and vis[x][y+1]==0 and (s[x][y+1]=='G' or s[x][y+1]=='.')) dfs(x,y+1);
}

void solve(){
	cin >> n >> m;
	for(ll i=0;i<n;++i){
        for(ll j=0;j<m;++j){
            cin>>s[i][j];
        }
	}
	if(s[n-1][m-1]=='B'){
		cout << "No";
		return;
	}
	for(ll i=0;i<n;++i){
        for(ll j=0;j<m;++j){
            if(s[i][j]=='B'){
			if(i!=0){
				if(s[i-1][j]=='G'){
					cout << "No";
					return;
				}
				if(s[i-1][j]=='.') s[i-1][j] = '#';
			}
			if(i!=n-1){
				if(s[i+1][j]=='G'){
					cout << "No";
					return;
				}
				if(s[i+1][j]=='.') s[i+1][j] = '#';
			}
			if(j!=0){
				if(s[i][j-1]=='G'){
					cout << "No";
					return;
				}
				if(s[i][j-1]=='.') s[i][j-1] = '#';
			}
			if(j!=m-1){
				if(s[i][j+1]=='G'){
					cout << "No";
					return;
				}
				if(s[i][j+1]=='.') s[i][j+1] = '#';
			}
        }
	}
    }
	ll flag = 0;
	for(ll i=0;i<n;++i){
		for(ll j=0;j<m;++j){
			if(s[i][j]=='G'){
				dfs(i,j);
				if(vis[n-1][m-1]==0){
					cout << "No";
					for(ll x=0;x<n;++x)
                        for(ll y=0;y<m;++y)
                            vis[x][y] = 0;
					return;
				}
				flag = 1;
				break;
			}
		}
		if(flag)
            break;
	}
	for(ll i=0;i<n;++i){
		for(ll j=0;j<m;++j){
			if(s[i][j]=='G' and vis[i][j]==0){
				cout << "No";
				for(ll x=0;x<n;++x){
                        for(ll y=0;y<m;++y){
                            vis[x][y] = 0;
                        }
				}
                return;
			}
		}
	}
	cout << "Yes";
	for(ll i=0;i<n;++i){
        for(ll j=0;j<m;++j){
            vis[i][j]=0;
        }
	}
    return;
}
int main(){
  fastio;
  ll t=0;
  cin>>t;
  while(t--){
    solve();
    cout<<"\n";
  }
  return 0;
}
