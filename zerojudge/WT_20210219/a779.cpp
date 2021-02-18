#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, rec, cmp;
    
    while(getline(cin, s)){
        rec.clear();

        for(auto x: s){
            if(islower(x) || isdigit(x)) rec += x;
            if(isupper(x)) rec += tolower(x);
        }

        cmp = rec;
        reverse(cmp.begin(), cmp.end());

        if(rec == cmp) cout << s << "\n-- is a palindrome\n";
        else cout << s << "\n-- is not a palindrome\n";
    }

    return 0;
}