#include <bits/stdc++.h>
using namespace std;

int f91(int N){
    if(N >= 101)
        return N - 10;
    
    return f91( f91(N + 11) );
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    while(cin >> N && N != 0){
        cout << "f91(" << N << ") = " << f91(N) << "\n";
    }
    return 0;
}