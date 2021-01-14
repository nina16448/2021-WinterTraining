#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n, d;
    int arr[5];
    cin >> n;
    while(n--){
        for(int i=0;i<4;i++){
            cin >> arr[i];
        }
        if(arr[1]-arr[0] == arr[3]-arr[2]){
            d = arr[2] - arr[1];
            arr[4] = arr[3] + d;
        }
        else if(arr[1]/arr[0] == arr[3]/arr[2]){
            d = arr[2] / arr[1];
            arr[4] = arr[3] * d;
        }
        for(auto x:arr) cout << x << " ";
        cout << "\n";
    }
    return 0;
}