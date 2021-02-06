#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    set <string> st;
    
    while(getline(cin, s)){
        if(st.count(s) == 0) cout << "NO\n";
        else cout << "YES\n";

        st.insert(s);
    }

    return 0;
}