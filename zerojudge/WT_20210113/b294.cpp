#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, num, money=0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> num;
        money += num * i;
    }
    cout << money << "\n";
    return 0;
}