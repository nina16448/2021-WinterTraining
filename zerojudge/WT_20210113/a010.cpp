#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n, times;
    bool flag=0;
    cin >> n;
    for(int i = 2; i <= n; i++){
        if(n%i!=0) continue;
        times=0;
        if(flag) cout << " * ";
        flag=true;
        while(n%i==0){
           n/=i;
           times++;
        }
        cout << i;
        if(times!=1) cout << "^" << times;
    }
    
    return 0;
}