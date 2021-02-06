#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y, int z){
    int high = 0, days = 0;

    if(y <= z && y < x){
        cout << "Poor Snail\n";
        return;
    }

    while(high < x){
        high += y;
        days++;

        if(high >= x){
            cout << days << "\n";
            return;
        }

        high -= z;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x, y, z;
    cin >> n;
    
    while(n--){
        cin >> x >> y >> z;
        solve(x, y, z);
    }

    return 0;
}