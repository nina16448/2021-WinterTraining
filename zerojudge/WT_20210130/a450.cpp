#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, Q, rec, left, right;
    vector <int> arr;

    cin >> N >> Q;

    while(N--){
        cin >> rec;
        arr.push_back(rec);
    }

    sort(arr.begin(), arr.end());

    while(Q--){
        cin >> left >> right;

        auto ptr1=lower_bound(arr.begin(), arr.end(),left);
        auto ptr2=upper_bound(arr.begin(), arr.end(),right);

        if(ptr2-ptr1 == 0) 
            cout << "The candies are too short\n";
        else 
            cout << ptr2-ptr1 << "\n";
    }

    return 0;
}