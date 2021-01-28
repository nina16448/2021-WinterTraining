#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector <int> arr;
    int n, num;
    string rec;
    stringstream ss;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> rec;
        reverse(rec.begin(), rec.end());
        ss << rec;
        ss >> num; 
        ss.clear();
        arr.push_back(num);
    }
    sort (arr.begin(), arr.end(), cmp);
    cout << arr[0] << "\n";
    
    return 0;
}