//CodeForces 20210216 C: https://codeforces.com/contest/1490/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long lint;

bool Binary_search(lint num){
    lint left = 0, right = 100000, mid;

    while(left < right - 1){
        mid = (left + right) / 2;
        if(mid * mid * mid >= num)
            right = mid;

        else 
            left = mid;
    }
    
    return (right * right * right == num);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint t, x, a, b;
    bool flag;
    cin >> t;
    while(t--){
        flag = 0;
        cin >> x;

        for(lint i = 1; i * i * i <= x; i++){
            b = x - (i * i * i);
            if(b == 0) break;
            
            if(Binary_search(b)){
                flag = 1;
                break;
            }
        }

        if(flag) cout << "YES\n";

        else cout << "No\n";
    }
    return 0;
}