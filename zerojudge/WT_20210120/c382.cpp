#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num1, num2;
    char s;
    while(cin >> num1){
        cin >> s >> num2;
        
        if(s == '+') cout << num1+num2;
        if(s == '-') cout << num1-num2;
        if(s == '*') cout << num1*num2;
        if(s == '/') cout << num1/num2;
        cout << "\n";
    }
    return 0;
}