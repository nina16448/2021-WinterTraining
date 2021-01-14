#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n){
        int sc=0;
        if(n<=10){
            sc=n*6;
        }
        else if(n<=20){
            sc=60;
            sc+=(n-10)*2;
        }
        else if(n<=40){
            sc=80;
            sc+=(n-20);
        }
        else{
            sc=100;
        }
        cout << sc << "\n";
    }
    return 0;
}