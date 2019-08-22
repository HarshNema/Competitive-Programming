#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll A[51][51];
ll n,m;
bool corner(ll x,ll y)
{
	if(x>=0&&x<n&&y>=0&&y<m)
		return true;
	else
		return false;
}

bool check(ll x,ll y)
{
	bool flag=false;
	if( A[x+1][y+1] && A[x+1][y] && A[x][y+1] && corner(x+1,y+1) && corner(x,y+1) && corner(x+1,y) )
	{
		return true;
	}

	if(corner(x+1,y-1)&&corner(x,y-1)&&corner(x+1,y)&& A[x+1][y-1]&&A[x+1][y]&&A[x][y-1])
	{
		return true;
	}
	if(A[x-1][y-1]&& A[x-1][y]&& A[x][y-1] && corner(x-1,y-1)&&corner(x,y-1)&&corner(x-1,y))
	{
		return true;
	}
	if(corner(x-1,y+1)&&corner(x,y+1)&&corner(x-1,y)&&A[x-1][y+1]&&A[x][y+1]&&A[x-1][y])
	{
		return true;
	}
	return false;
}
int main()
{

	cin>>n>>m;
    vector<pair<ll,ll> >cont;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			cin>>A[i][j];
		}
	}

	for (ll i = 0; i <n; ++i)
	{
		for(ll j=0;j<m;j++)
		{
			if(A[i][j]==1)
			{
				if(!check(i,j))
				{
					cout<<"-1"<<"\n";
					return 0;
				}
				else
				{	ll x=i,y=j;
					if( A[x+1][y+1] && A[x+1][y]&& A[x][y+1] && corner(x+1,y+1) && corner(x,y+1) && corner(x+1,y) )
						{
							cont.push_back({i+1,j+1});
						}
				}
			}
		}
	}
	cout<<cont.size()<<"\n";
	for(ll i=0;i<cont.size();++i)
	{
		cout<<cont[i].first<<" "<<cont[i].second<<"\n";
	}
	return 0;

}
