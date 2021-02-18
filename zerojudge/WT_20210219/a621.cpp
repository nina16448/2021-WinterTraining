#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, num = 1;
    cin >> n;

    for(int i = 0; i <= n; i++){
        cout << "2^" << i << " = " << num << "\n";
        num *= 2;
    }
    
    return 0;
}