#include <bits/stdc++.h>
using namespace std;

struct google{
    string URL;
    int val;
};

bool cmp(google A, google B){
    return A.val > B.val;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    google arr[10];
    int T;
    cin >> T;
    for(int times = 1; times <= T; times++){
        cout << "Case #" << times << ":\n";
        for(int i = 0; i < 10; i++){
            cin >> arr[i].URL;
            cin >> arr[i].val;
        }

        sort(arr, arr+10, cmp);
        
        int max=arr[0].val;
        for(auto x: arr){
            if(x.val == max)
                cout << x.URL << "\n";
        }
    }
    return 0;
}