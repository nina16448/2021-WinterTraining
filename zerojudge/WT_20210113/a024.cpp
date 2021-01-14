#include <bits/stdc++.h>
using namespace std;

typedef long long lint;

lint GCD(lint a, lint b){
    return b? GCD(b,a%b) : a;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    lint a,b;
    cin >> a >> b;
    cout << GCD(a,b);
    return 0;
}