#include <bits/stdc++.h>
using namespace std;

int d[1000002];
int idx[1000002];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    d[1]=0;
    for(int i=2; i<=n; i++) {
        d[i] = d[i-1] +1;
        idx[i] = i-1;
        if(i%3==0) {
            if(d[i]>(d[i/3]+1)) {
                d[i] = d[i/3]+1;
                idx[i] = i/3;
            }
        }
        if(i%2==0) {
            if(d[i]>(d[i/2]+1)) {
                d[i] = d[i/2]+1;
                idx[i] = i/2;
            }
        }
    }
    cout << d[n] << '\n';
    int cur = n;
    while(cur!=0) {
        cout << cur << ' ';
        cur = idx[cur];
    }
}