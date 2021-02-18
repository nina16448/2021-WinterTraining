#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, rec;
    while(getline(cin, s) && s != "END"){
        stringstream ss;
        ss << s;

        while(ss >> rec){
            char c = toupper(rec[0]);
            cout << c;
        }
        
        cout << " " << rec << "\n";
    }

    return 0;
}