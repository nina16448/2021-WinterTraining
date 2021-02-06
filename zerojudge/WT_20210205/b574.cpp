#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k, X, C, in = 0, Maxin = 0;
    cin >> k;

    while(k--){
        cin >> X >> C;

        if(C) in++;
        else in--;

        if(in > Maxin) Maxin = in;
    }
    
    cout << Maxin << "\n";

    return 0;
}