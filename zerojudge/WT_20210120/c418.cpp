#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        s += '*';
        cout << s;
        cout << "\n";
    }
    return 0;
}