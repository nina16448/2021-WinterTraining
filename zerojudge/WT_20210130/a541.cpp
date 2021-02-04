#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    set <string> st;
    int n;
    string s;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        st.insert(s);
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(st.count(s) == 0) 
            cout << "no\n";
        else 
            cout << "yes\n";

        st.insert(s);
    }
    
    return 0;
}