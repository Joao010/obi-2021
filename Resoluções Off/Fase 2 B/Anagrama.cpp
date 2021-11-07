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
  int n;
  cin>>n;
  string a, b;
  getline(cin, a);
  getline(cin, a);
  getline(cin, b);
  map<char, int> mpa, mpb;
  if(s(a) != s(b)) {
    cout<<"N\n";
    return 0;
  }
  r(l, a) {
    ++mpa[l];
  }
  r(l, b) {
    ++mpb[l];
  }
  f(i,65,91) {
    const char cha = char(i);
    if(mpa[cha] != mpb[cha]) {
      cout<<"N\n";
      return 0;
    }
  }
  f(i,97,123) {
    const char cha = char(i);
    if(mpa[cha] != mpb[cha]) {
      cout<<"N\n";
      return 0;
    }
  }
  cout<<"S\n";
}
