#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int a, b, c, D, x1, x2;
    cin >> a >> b >> c;
    D = ((b*b) - 4*a*c);
    if(D < 0){
        cout << "No real root\n";
    }
    else{
        x1=((-b) + (sqrt(D))) / (2*a);
        x2=((-b) - (sqrt(D))) / (2*a);
        if(x1==x2) cout << "Two same roots x=" << x1 << "\n";
        else{
            cout << "Two different roots x1=" << x1;
            cout << " , x2=" << x2 << "\n";
        }
    }
    return 0;
}