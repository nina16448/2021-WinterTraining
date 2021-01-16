#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    char ans[5];
    int n;
    char guess[5];
    cin >> ans;
    cin >> n;
    while(n--){
        int A = 0, B = 0;
        cin >> guess;

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(ans[i] == guess[i]){
                    A++;
                    break;
                }
                if(ans[i] == guess [j]){
                    B++;
                    break;
                }
            }
        }
        cout << A << "A" << B << "B\n";
    }
    return 0;
}