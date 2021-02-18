#include <bits/stdc++.h>
using namespace std;
double num, odd, even;
map<int, double> mp;
string s, data, rec;
stringstream ss, number, todigit;
int ID;

void save(){
    mp.clear();
    ss.clear();
    ss << s;
    odd = 0; 
    even = 0;

    while(ss >> data){
        number.clear();
        todigit.clear();
        number << data;

        getline(number, rec, ':');
        todigit << rec;
        todigit >> ID;
        todigit.clear();

        getline(number, rec, ':');
        todigit << rec;
        todigit >> num;
        
        mp[ID] = num;
    }
    for(auto x: mp){
        if(x.first % 2) odd += x.second;
        else even += x.second;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(getline(cin, s)){
        save();
        cout << odd - even << "\n";
    }
    return 0;
}