#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rec, maxsum, sum;

    while(cin >> n){
        sum = maxsum = 0;

        for(int i = 0; i < n; i++){
            cin >> rec;
            sum += rec;
            maxsum = max(maxsum, sum);
            if(sum < 0) sum = 0;
        }
        
        cout << maxsum << "\n";
    }

    return 0;
}