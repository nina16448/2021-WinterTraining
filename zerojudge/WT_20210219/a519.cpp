#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
lint arr[100];

lint F(int level){
    if(arr[level] == 0)
        arr[level] = F(level - 1) + F(level - 2);

    return arr[level];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    arr[1] = 1;
    arr[2] = 2;

    while(cin >> n && n != 0){
        cout << F(n) << "\n";
    }
    
    return 0;
}