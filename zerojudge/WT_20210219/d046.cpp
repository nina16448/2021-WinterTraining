#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, num, cnt = 0;
    cin >> n;
    while(n--){
        cin >> num;
        if(num <= 10) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}