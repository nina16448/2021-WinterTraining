#include <bits/stdc++.h>
using namespace std;

void cu(double T ,int i,int time){
    if(i == time+1){
        T-=0.00005;
        printf("%.4f\n",T);
        return;
    }
    T= T + (i*2.71828);
    cu(T, i+1, time);
}

int main(){
    int n, time;
    double ans, oriT;
    scanf("%d",&n);
    while(n--){
        scanf("%lf,%d",&oriT,&time);
        cu(oriT, 0, time);
    }
    
    return 0;
}