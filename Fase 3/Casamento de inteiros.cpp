#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

#define vt vector
#define eb emplace_back
#define pb push_back
#define f(i, s, f) for(int i = s; i < f; ++i)
#define fd(i, s, f) for(int i = s; i >= f; --i)
#define r(x, ns) for(auto& x : ns)
#define s(x) int(x.size())
#define be(ns) ns.begin(), ns.end()
#define rbe(ns) ns.rbegin(), ns.rend()
#define gr(type) vt<type>, greater<type>
#define F first
#define S second

const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;
const int MAX = 102;

int main() {
  string a, b, ansa = "", ansb = ""; cin>>a>>b;
  const int ia = stoi(a), ib = stoi(b);
  a = to_string(ia), b = to_string(ib);
  if(s(a) < s(b)) {
    f(i,0,s(b) - s(a)) a.insert(0, 1, '0');
  } else if(s(a) > s(b)) {
    f(i,0,s(a) - s(b)) b.insert(0, 1, '0');
  }
  f(i,0,s(a)) {
    const int va = a[i] - 48;
    const int vb = b[i] - 48;
    if(va > vb) ansa += a[i];
    else if(va < vb) ansb += b[i];
    else ansa += a[i], ansb += b[i];
  }
  if(!s(ansa)) ansa = "-1";
  if(!s(ansb)) ansb = "-1";
  const int iansa = stoi(ansa);
  const int iansb = stoi(ansb);
  cout<<min(iansa, iansb)<<' '<<max(iansa, iansb)<<'\n';
}
