#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
lint n, k;

void solve(){
    if(n == 0){
        cout << "Ok!\n";
        return;
    }
    if(k == 0){
        cout << "Impossib1e!\n";
        return;
    }
    if(n % k == 0){
        cout << "Ok!\n";
        return;
    }
    cout << "Impossib1e!\n";

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n){
        cin >> k;
        solve();
    }
    return 0;
}