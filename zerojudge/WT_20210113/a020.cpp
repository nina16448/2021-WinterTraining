#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans=0, flag=0, rec;
    char c;
    while((c=getchar())!=EOF){
        if(flag==0){ 
            if(c<='H') rec = (int) c - 55;
            else if(c=='I') rec = 34;
            else if(c=='O') rec = 35;
            else if(c=='W') rec = 32;
            else if(c=='Z') rec = 33;
            else if(c<='N') rec = (int) c - 56;
            else if(c<='W') rec = (int) c - 57;
            else rec = (int) c - 58;
            ans=rec/10;
            ans+=(rec%10)*9;
        }
        else{
            rec= (int) c-'0';
            if(flag==9) ans+=rec;
            ans+= rec*(9-flag);
        }
        flag++;
        
        if(flag==10) break;
    }
    if(ans%10==0) cout << "real";
    else cout << "fake";
    return 0;
}