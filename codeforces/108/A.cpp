#include"bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
	fastio;
	string s;
	cin >> s;
	if (s < "01:10")
		cout << "01:10";
	else if (s < "02:20")
		cout << "02:20";
	else if (s < "03:30")
		cout << "03:30";
	else if (s < "04:40")
		cout << "04:40";
	else if (s < "05:50")
		cout << "05:50";
	else if (s < "10:01")
		cout << "10:01";
	else if (s < "11:11")
		cout << "11:11";
	else if (s < "12:21") 
		cout << "12:21\n";
	else if (s < "13:31") 
		cout << "13:31";
	else if (s < "14:41") 
		cout << "14:41";
	else if (s < "15:51") 
		cout << "15:51";
	else if (s < "20:02") 
		cout << "20:02";
	else if (s < "21:12")
		cout << "21:12";
	else if (s < "22:22") 
		cout << "22:22";
	else if (s < "23:32")
		cout << "23:32";
	else cout << "00:00";

	return 0;
}