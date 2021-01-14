#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int arr[100][100];
    int r, c, rec;

    while(cin >> r){
        cin >> c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin >> arr[i][j];
            }
        }
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                cout << arr[j][i] << " ";
            }
            cout << "\n";
        }
        
    }
    return 0;
 }