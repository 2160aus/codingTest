#include <bits/stdc++.h>
using namespace std;
int check[201];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,v;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a;
        check[a+100]++;
    }
    cin>> v;
    cout << check[v+100];
}