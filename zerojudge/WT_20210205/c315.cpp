#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int move[4][2] = {{0 , 1}, {1 , 0}, {0 , -1}, {-1 , 0}};
    int a, b, N, x = 0, y = 0;
    cin >> N;

    while(N--){
        cin >> a >> b;
        
        x += move[a][0] * b;
        y += move[a][1] * b;
    }

    cout << x << " " << y << "\n";
    return 0;
}