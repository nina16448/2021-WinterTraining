#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, sum, rec;
    while(cin >> n){
        sum = 0;
        for(int i=0;i<n;i++){
            cin >> rec;
            sum+=rec;
        }
        if(((double)sum/n)>59) cout << "no\n";
        else cout << "yes\n";
    }
    return 0;
}