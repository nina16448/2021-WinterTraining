#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return b? GCD(b, a%b) : a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    while(cin >> a){
        cin >> b;
        cout << GCD(a,b) << "\n";
    }
    
    return 0;
}