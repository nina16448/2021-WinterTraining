#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    stack <char> stk;
    string s;
    cin >> n;
    cin.ignore();

    while(n--){
        while(!stk.empty()) stk.pop();
        
        getline(cin, s);
        for(auto x: s){
            if(x == '(') stk.push('(');
            if(x == '[') stk.push('[');

            if(x == ')'){
                if(!stk.empty() && stk.top() == '(')
                    stk.pop();
                else stk.push(')');
            }
            if(x == ']'){
                if(!stk.empty() && stk.top() == '[')
                    stk.pop();
                else stk.push(']');
            }
        }

        if(stk.empty()) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}