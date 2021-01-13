#include <bits/stdc++.h>
using namespace std;

int main(){
    double num[7];
    for(int i=0;i<7;i++){
        cin >> num[i];
    }
    double maxpro=0;
    int buy=0,sell=0;
    for(int i=0; i<7 ;i++){
        for(int j=0 ;j<7 ;j++){
            if(num[j]-num[i]>maxpro && j>i){
                maxpro=num[j]-num[i];
                buy=i;
                sell=j;
            }
        }
    }
    if(maxpro==0){
        cout << "No profit!";
    }
    else{
        cout << "Best buy date:" << buy+1;
        cout << "\nBest sell date:"<< sell+1;
        cout << "\nProfit:"<< maxpro;
    }

    
    return 0;
}