#include <bits/stdc++.h>
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  list<char> l;
  string s;
  char c;
  int n;
  cin >> s >> n;
  for(auto e : s) l.push_back(e);
  auto t = l.end();
  for(int i=0;i<n;i++) {
    cin >> c;
    if(c=='L') {
      if(t!=l.begin()) t--;
    }
    else if(c=='D') {
      if(t!=l.end()) t++;
    }
    else if(c=='B') {
      if(t!=l.begin()) {
        t--;
        t = l.erase(t);
      }
    }
    else if(c=='P') {
      cin >> c;
      l.insert(t,c);
    }
  }
  for(auto e : l) cout<< e;
}