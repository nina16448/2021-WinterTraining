#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n!=0){
        for(int i=1;i<n;i++){
            if(i%7==0) continue;
            cout << i << " ";
        }
        cin >> n;
        cout << "\n";
    }
    return 0;
}