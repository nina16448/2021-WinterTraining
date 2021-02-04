#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s = "UGYTI";
    int X;

    while(cin >> X)
        cout << s[X % 5] << "\n";

    return 0;
}