#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string line, star;
    cin >> n;
    star = "*";
    for(int i = n-1; i > 0 ; i--)
        line += '_';

    for(int i = 0; i < n; i++){
        cout << line << star << line << "\n";

        star += "**";
        line.pop_back();
    }
    return 0;
}