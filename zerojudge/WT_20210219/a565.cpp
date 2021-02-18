#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, cnt;
    string s;
    stack <char> stk;
    cin >> t;
    while(t--){
        while(!stk.empty()) stk.pop();
        cnt = 0;

        cin >> s;

        for(auto x: s){
            if(x == 'p') stk.push(x);

            if(x == 'q'){
                if(!stk.empty() && stk.top() == 'p'){
                    stk.pop();
                    cnt++;
                }
            }
        }
        
        cout << cnt << "\n";
    }
    return 0;
}