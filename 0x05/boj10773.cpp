#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k,n,sum=0;
    stack<int> S;
    cin >> k;
    while(k--) {
        cin >> n;
        if(n==0) S.pop();
        else S.push(n);
    }
    while(!S.empty()) {
        sum+=S.top();
        S.pop();
    }
    cout << sum;
}