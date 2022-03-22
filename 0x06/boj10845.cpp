#include <bits/stdc++.h>
using namespace std;
const int MAX=10001;
int que[MAX];
int head=0, tail=0;

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
            que[tail++] = x;
        }
        else if(s=="pop") {
            if(head==tail) cout << -1 << "\n";
            else {
                cout << que[head++] << "\n";
            }
        }
        else if(s=="size") cout << tail-head << "\n";
        else if(s=="empty") {
            if(head==tail) cout << 1 <<"\n";
            else cout << 0 << "\n";
        }
        else if(s=="front") {
            if(head==tail) cout << -1 << "\n";
            else cout << que[head] << "\n";
        }
        else {
            if(head==tail) cout << -1 << "\n";
            else cout << que[tail-1] << "\n";
        }
    }
}