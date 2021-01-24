#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int y;
    while(cin >> y){
        if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            cout << "閏年\n";
        else cout << "平年\n";
    }
    return 0;
}