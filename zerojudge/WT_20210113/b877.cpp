#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int start, end;
    cin >> start >> end;
    cout << (end<start)*((100+end)-start)+(end>start)*(end-start) << "\n";
    return 0;
}