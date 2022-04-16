#include <bits/stdc++.h>
using namespace std;
int table[12];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    table[1]=1;
    table[2]=2;
    table[3]=4;
    for(int i=4; i<11; i++) {
        table[i] = table[i-1] + table[i-2] + table[i-3];
    }
    while(t--) {
        int n;
        cin >> n;
        cout << table[n] << '\n';
    }
}