#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    deque <char> dq;
    int n;
    cin >> n;
    for(int i = n-1; i > 0; i--)
        dq.push_back('_');
        dq.push_back('*');

    for(int i = 1 ; i <= n; i++){
        for(auto x: dq)
            cout << x;
        cout << "\n";

        dq.pop_front();
        dq.push_back('*');
    }
    return 0;
}