#include <bits/stdc++.h>
using namespace std;
string s;
int num;
void solve(){
    for(auto x: s){
        if(islower(x)) num += x - 'a' + 1;

        else if(isupper(x)) num += x - 'A' + 1;

        else{
            cout << "Fail\n";
            return;
        }
    }
    cout << num << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    while(cin >> s && s != "0"){
        num = 0;
        solve();
    }

    return 0;
}