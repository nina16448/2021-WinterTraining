#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,m,k;
    
    cin >> t;
    while(t--){
        bool dio[110]={0};
        cin >> m;
        cin >> k;
        int rec=0,i=k,recc=0;
        while(recc!=m-1){
            if(dio[i]==1){
            }
            else if(rec==0) rec=1;
            else if(rec==1){
                //cout << i << "i\n";
                dio[i]=1;
                rec=0;
                recc++;
            }
            i++;
            if(i>m) i=1;
        }
        for(int j=1;j<=m;j++){
            if(dio[j]==0)cout << j << "\n";
        }
    }
    return 0;
}