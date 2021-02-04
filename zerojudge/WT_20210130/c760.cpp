#include <bits/stdc++.h>
using namespace std;
string s, name;
stringstream ss;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    getline(cin, s);
    ss << s;

    while(ss >> name){
        name[0] = toupper(name[0]);
        cout << name << "\n";
    }

    return 0;
}