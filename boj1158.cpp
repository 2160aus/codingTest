#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<int> L;
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++) L.push_back(i); //145
    auto p = L.begin();
    cout << "<";
    while(n--) {
        for(int i=1;i<k;i++) {
            if(p==L.end()) p=L.begin();
            p++;
            if(p==L.end()) p=L.begin();
        }
        if(n) cout << *p <<", ";
        else cout<< *p;
        p=L.erase(p);
    }
    cout << ">";
}