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
  string a, b; cin>>a>>b;
  string ans1 = "", ans2 = "";
  if(s(a) < s(b)) a.insert(a.begin(), s(b) - s(a), '0');
  if(s(b) < s(a)) b.insert(b.begin(), s(a) - s(b), '0');
  f(i,0,s(a)) {
    const char ans = max(a[i] - '0', b[i] - '0') + 48;
    if(a[i] == ans) ans1 += ans;
    if(b[i] == ans) ans2 += ans;
  }
  if(!s(ans1)) ans1 = "-1";
  if(!s(ans2)) ans2 = "-1";
  cout<<min(stoi(ans1), stoi(ans2))<<' '<<max(stoi(ans1), stoi(ans2))<<'\n';
}
