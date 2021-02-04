#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector <int> arr;
    int high, rec;

    for(int i = 0; i < 10; i++){
        cin >> rec;
        arr.push_back(rec);
    }

    cin >> high;
    high += 30;

    sort(arr.begin(), arr.end());
    
    cout << upper_bound(arr.begin(), arr.end(), high) - arr.begin() << "\n";
    return 0;
}