#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(auto x: s){
        cout << (char)(x+'*'-'1');
    }
    return 0;
}