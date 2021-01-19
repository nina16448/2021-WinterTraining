#include <bits/stdc++.h>
using namespace std;


int GCD(int a,int b){
    return b? GCD(b,a%b) :a;
}

int LCM(int a,int b){
    return a/GCD(a,b)*b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    string s1,s2,rec;

    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        int len1,len2;
        len1=s1.size();
        len2=s2.size();
        int len=LCM(len1,len2);
        rec=s1;
        for(int i=1;i<len/len1;i++){
            s1+=rec;
        }
        rec=s2;
        for(int i=1;i<len/len2;i++){
            s2+=rec;
        }
        if(s1==s2) cout << s1 << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}