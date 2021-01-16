#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long N, a, b, c, ans;
    cin >> N;
    while(N--){
        cin >> a >> b >> c;
        if(a == 1) ans = b + c;
        if(a == 2) ans = b - c;
        if(a == 3) ans = b * c;
        if(a == 4) ans = b / c;
        cout << ans << "\n";
    }
    return 0;
}