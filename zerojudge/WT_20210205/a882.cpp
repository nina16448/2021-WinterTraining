#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s;
    cin >> n;
    while(n--){
        int sum = 0;
        cin >> s;

        for(auto x: s){
            if(x == 'X')
                sum += 2;
            if(x == 'H')
                sum += 1;
        }
        
        cout << sum << "\n";
    }

    return 0;
}