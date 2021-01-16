#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, rec;
    char c;
    scanf("%d\n",&t);
    while(t--){
        long long int ans=1;
        while((c=getchar())!=EOF && c!='\n'){
            if(isdigit(c)){
                rec=c-'0';
                ans*=rec;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}