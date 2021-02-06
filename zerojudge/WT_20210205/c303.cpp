#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s;

    while(cin >> n){
        cin >> s;

        for(auto x: s){
            if(x <= 'Z')
                x = x - 'A' + 'a';
            else 
                x = x - 'a' + 'A';
            
            cout << x;
        }
        
        cout << "\n";
    }
    return 0;
}