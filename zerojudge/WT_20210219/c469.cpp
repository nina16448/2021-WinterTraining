#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, ans, rec;
    cin >> n;

    rec = sqrt(n);
    ans = n - (rec * rec);

    cout << ans << "\n";
    return 0;
}