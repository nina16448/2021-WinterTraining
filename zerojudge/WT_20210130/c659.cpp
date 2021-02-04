#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int flag = 0;
    string s, word, a;
    stringstream ss;

    getline(cin, s);
    ss << s;
    ss >> a;

    while(ss >> word){
        if(flag) cout << " " << a << " ";

        cout << word;

        flag = 1;
    }
    
    return 0;
}