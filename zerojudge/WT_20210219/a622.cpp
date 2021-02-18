#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector <string> arr;
    string s;
    int maxsize = 0;

    while(getline(cin, s) && s != "END"){
        arr.push_back(s);
        maxsize = max <int> (s.size(), maxsize);
    }

    for(int i = 0; i < maxsize; i++){
        for(auto name: arr){
            if(name.size() <= i) 
                cout << "   ";
            else
                cout << name[i] << "  ";
        }
        cout << "\n";
    }
    return 0;
}