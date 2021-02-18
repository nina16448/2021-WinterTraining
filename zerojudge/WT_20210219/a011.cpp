#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s, words, rec;
    stringstream ss;

    while(getline(cin, s)){
        n = 0;
        words.clear();
        ss.clear();

        for(auto x: s){
            if(isalpha(x))
                words += x;
            else
                words += ' ';
        }
        
        ss << words;
        while(ss >> rec)
            n++;

        cout << n << "\n";
    }
    return 0;
}