#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n){
        cout << (n*n*n+5*n+6)/6 << "\n";
    }
    return 0;
}