#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, ans;
    bool flag = false;

    while(getline(cin, s)){
        ans.clear();

        for(auto x: s){
            if(x == '"'){
                if(flag){
                    ans += "''";
                    flag = false;
                }
                else{
                    ans += "``";
                    flag = true;
                }
            }
            else ans += x;
        }

        cout << ans << "\n";
    }
    return 0;
}