#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;

    while(getline(cin, s)){
        for(int i = 0; i < s.size(); i++){
            if(isupper(s[i])) s[i] = tolower(s[i]);
        }

        for(int i = 0; i < s.size(); i++){
            if(isspace(s[i])) continue;

            s[i] = toupper(s[i]);
            cout << s << "\n";
            
            s[i] = tolower(s[i]);
        }
        
    }
    return 0;
}