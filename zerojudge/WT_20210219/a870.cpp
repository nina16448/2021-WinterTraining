#include <bits/stdc++.h>
using namespace std;
string command, word, rec;
vector <string> List;

void Add(){
    cin >> word;
    List.push_back(word);
}

void Insert(){
    cin >> word >> rec;
    for(auto itr = List.begin(); itr < List.end(); itr++){
        if(rec == *itr){
            List.insert(itr, word);
            break;
        }   
    }
}

void Remove(){
    cin >> word;
    for(auto itr = List.begin(); itr < List.end(); itr++){
        if(word == *itr){
            List.erase(itr);
            break;
        }   
    } 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> command && command != "SHOW"){
        if(command == "ADD") Add();

        if(command == "INSERT") Insert();

        if(command == "REMOVE") Remove();
    }

    for(auto x: List)
        cout << x << " ";
    cout << "\n";

    return 0;
}