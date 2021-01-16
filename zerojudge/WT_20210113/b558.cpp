#include <bits/stdc++.h>
using namespace std;
int n;
int listt[501];

int table(int level){
    if(level == 1){
        listt[1]=1;
        return 1;
    }
    listt[level]=table(level-1) + (level-1);
    return listt[level];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    table(500);
    while(cin >> n){
        cout << listt[n] << "\n";
    }
    return 0;
}