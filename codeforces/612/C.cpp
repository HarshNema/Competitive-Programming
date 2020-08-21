#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define maxN 200007
using namespace std;
int main() {
  fastio;
  string s;
  cin >> s;
  stack<char>st;
  ll n = s.length();
  ll c = 0;
  bool ok = true;
  for (ll i = 0; i < n; ++i) {
    if (s[i] == '(' or s[i] == '{' or s[i] == '[' or s[i] == '<')
      st.push(s[i]);
    else {
      if (st.empty()) {
        ok = false;
        break;
      }
      if (s[i] == ')' and st.top() != '(')
        ++c;
      if (s[i] == '}' and st.top() != '{')
        ++c;
      if (s[i] == ']' and st.top() != '[')
        ++c;
      if (s[i] == '>' and st.top() != '<')
        ++c;
      st.pop();
    }
  }
  if (!st.empty())
    ok = false;
  if (ok)
    cout << c;
  else
    cout << "Impossible";
}