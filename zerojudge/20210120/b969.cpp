#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector <string> name;
    string s, rec;

    getline(cin , s);
    s.push_back(' ');

    for(auto x: s){
        if(x == ' '){
            name.push_back(rec);
            rec.clear();
        }
        else rec+=x;
    }

    getline(cin , s);
    for(auto x: name){
        cout << s << ", " << x << "\n";
    }

    return 0;
}