#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, rec, rec2;
    vector <int> arr;
    cin >> n;

    while(n--){
        cin >> rec;
        arr.push_back(rec);
    }

    cin >> m;
    
    while(m--){
        cin >> rec >> rec2;
        cout << arr[rec] + arr[rec2] << "\n";
    }

    return 0;
}