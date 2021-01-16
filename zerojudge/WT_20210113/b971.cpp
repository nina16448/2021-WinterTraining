#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a0, an, d;
    cin >> a0 >> an >> d;


    for(int i = a0; i != an; i+=d){
        cout << i << " ";
    }
    cout << an;
    cout << "\n";
    return 0;
}