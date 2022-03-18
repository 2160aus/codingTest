#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) {
        list<char> L={};
        string s;
        auto t = L.begin();
        cin >> s;
        for(char c : s) {
            if(c=='<') {
                if(t!=L.begin()) t--;
            }
            else if(c=='>') {
                if(t!=L.end()) t++;
            }
            else if(c=='-') {
                if(t!=L.begin()) {
                    t--;
                    t = L.erase(t);
                }
            }
            else L.insert(t,c);
        }
        for(auto l : L) cout << l;
        cout << "\n";
    }
}