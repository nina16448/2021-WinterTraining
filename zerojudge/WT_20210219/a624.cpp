#include <bits/stdc++.h>
using namespace std;

int solve(string pswd){
    int cnt = 0;
    bool upper = 0, lower = 0, digit = 0;

    for(auto x: pswd){
        if(isdigit(x) || ispunct(x)) digit = 1;

        if(isupper(x)) upper = 1;

        if(islower(x)) lower = 1;
    }

    if(pswd.size() >= 8) cnt++;
    
    if(upper && lower) cnt++;

    if((upper || lower) && digit) cnt++;

    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string password;
    int cnt;

    while(cin >> password){
        cnt = solve(password);

        if(cnt == 0) cout << "This password is WEAK\n";
        if(cnt == 1) cout << "This password is ACCEPTABLE\n";
        if(cnt == 2) cout << "This password is GOOD\n";
        if(cnt == 3) cout << "This password is STRONG\n";
    }
    return 0;
}