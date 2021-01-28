#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rec, maxans = 0, maxnum = 0;
    cin >> n;
    while(n--){
        cin >> rec;
        if(rec > maxnum) maxnum = rec;
        if(maxnum - rec > maxans) maxans = maxnum - rec;
    }
    cout << maxans << "\n";
    return 0;
}