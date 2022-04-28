#include <bits/stdc++.h>
using namespace std;
int r[100002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> r[i];
    sort(r,r+n);
    int mx=0;
    for(int i=n-1; i>=0; i--)
        mx = max(mx,r[i]*(n-i));
    cout << mx;
}