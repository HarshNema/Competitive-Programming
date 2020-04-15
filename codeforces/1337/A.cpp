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

//ll modexp(ll x, ll y, ll p)
//{
//  ll res = 1;
//  x = x % p;
//  while (y > 0)
//  {
//      if (y & 1)
//          res = (res * x) % p;
//      y = y >> 1;
//      x = (x * x) % p;
//  }
//  return res;
//}
//
//ll mulmod(ll a, ll b)
//{
//    ll res = 0;
//    a = a % mod;
//    while (b > 0)
//    {
//        if (b % 2 == 1)
//            res = (res + a) % mod;
//        a = (a * 2) % mod;
//        b /= 2;
//    }
//    return res % mod;
//}

// ll sub_mod(ll a, ll b, ll m)
//{
//    if (a >= b)
//        return a - b;
//    else
//        return m - b + a;
//}

// ll add_mod(ll a, ll b)
//{
//    if (0 == b)
//        return a;
//    b = mod - b;
//    if (a >= b)
//        return a - b;
//    else
//        return mod - b + a;
//}

// ll gcd(ll a, ll b)
// {
//  if (a == 0)
//      return b;
//  else
//      return gcd(b % a, a);
// }

// ll modInv(ll a)
// {
//     ll g = gcd(a, mod);
//     if (g != 1)
//         return -1;
//     else
//         return modexp(a, mod-2, mod);
// }
// ll lcm(ll a, ll b)
// {
//     return (a*b)/gcd(a,b);
// }

int main()
{
    fastio;
    ll t=0;
    cin>>t;
    while(t--){
        ll a=0,b=0,c=0,d=0;
        cin>>a>>b>>c>>d;
        cout<<a<<" "<<c<<" "<<c<<"\n";
    }
    return 0;
}
