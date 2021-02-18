#include <bits/stdc++.h>
using namespace std;
int t;
string s;

void solve(){
    int left = 0, right = 0, num = 0;
    for(auto x: s){
        if(right > left){
            cout << "0\n";
            return;
        }
        if(x == '(')
            left++;

        if(x == ')'){
            right++;
            if(left > 0){
                left--;
                right--;
                num++;
            }
        }
    }

    if(left != 0 || right != 0){
        cout << "0\n";
        return;
    }

    cout << num << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);    
    cin >> t;
    while(t--){
        cin >> s;
        solve();
    }
    return 0;
}