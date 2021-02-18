#include <bits/stdc++.h>
using namespace std;

bool cmp(string A, string B){
    if(A.size() == B.size())
        return A > B;
        
    return A.size() > B.size();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    vector <string> arr;
    string s;
    cin >> n;
    while(n--){
        arr.clear();
        for(int i = 0; i < 3; i++){
            cin >> s;
            arr.push_back(s);
        }
        sort(arr.begin(), arr.end(), cmp);
        cout << arr[0] << "\n";
    }
    return 0;
}