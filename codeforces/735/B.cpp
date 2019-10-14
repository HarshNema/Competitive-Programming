#include "bits/stdc++.h"
#define ll long long int
#define mod 1e9+7
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fastio;
	ll n = 0, n1 = 0, n2 = 0;
	cin >> n >> n1 >> n2;
	vector<float>v(n);
	for (ll i = 0; i < n; ++i)
		cin >> v[i];
	sort(v.begin(), v.end(), greater<float>());
	float a = min(n1, n2);
	float m1=0., m2=0.;
	for (ll i = 0; i < a; ++i)
	{
		m1 += v[i];
	}
	m1 = (m1 / a);
	for (ll i = a; i < (n1 + n2); ++i)
	{
		m2 += v[i];
	}
	
	m2 = (m2 / max(n1,n2));
	//cout << m1 << " " << m2 << "\n";
	float m = m1 + m2;
	printf("%.8f", m);

	return 0;
}