#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int M, D, S;
    cin >> M >> D;
    S = (M*2+D)%3;
    if(S == 0) cout << "普通\n";
    if(S == 1) cout << "吉\n";
    if(S == 2) cout << "大吉\n";
    return 0;
}