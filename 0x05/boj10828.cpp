#include <bits/stdc++.h>
using namespace std;
const int MAX=10001;
int st[MAX];
int pos=0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x;
    string s;
    cin >> n;
    while(n--) {
        cin >> s;
        if(s=="push") {
            cin >> x;
            st[pos++] = x;
        }
        else if(s=="pop") {
            if(pos==0) cout << -1 << "\n";
            else {
                cout << st[--pos] << "\n";
            }
        }
        else if(s=="size") cout << pos << "\n";
        else if(s=="empty") {
            if(pos==0) cout << 1 <<"\n";
            else cout << 0 << "\n";
        }
        else {
            if(pos==0) cout << -1 << "\n";
            else cout << st[pos-1] << "\n";
        }
    }
}