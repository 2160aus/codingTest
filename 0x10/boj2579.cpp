#include <bits/stdc++.h>
using namespace std;

int step[301];
int score[301][3];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) 
        cin >> step[i];
    if(n==1) {
        cout << step[1];
        return 0;
    }
    score[1][1] = step[1];
    score[1][2] = 0;
    score[2][1] = step[2];
    score[2][2] = step[1] + step[2];
    for(int i=3; i<=n; i++) {
        score[i][1] = max(score[i-2][1],score[i-2][2]) + step[i];
        score[i][2] = score[i-1][1] + step[i];
    }
    cout << max(score[n][1],score[n][2]);
}