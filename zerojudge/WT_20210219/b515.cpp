#include <bits/stdc++.h>
using namespace std;
int n, rec;
string s, Code;
map <string, char> Morse;

void table(){
    Morse[".-"] = 'A';
    Morse["-..."] = 'B';
    Morse["-.-."] = 'C';
    Morse["-.."] = 'D';
    Morse["."] = 'E';
    Morse["..-."] = 'F';
    Morse["--."] = 'G';
    Morse["...."] = 'H';
    Morse[".."] = 'I';
    Morse[".---"] = 'J';
    Morse["-.-"] = 'K';
    Morse[".-.."] = 'L';
    Morse["--"] = 'M';
    Morse["-."] = 'N';
    Morse["---"] = 'O';
    Morse[".--."] = 'P';
    Morse["--.-"] = 'Q';
    Morse[".-."] = 'R';
    Morse["..."] = 'S';
    Morse["-"] = 'T';
    Morse["..-"] = 'U';
    Morse["...-"] = 'V';
    Morse[".--"] = 'W';
    Morse["-..-"] = 'X';
    Morse["-.--"] = 'Y';
    Morse["--.."] = 'Z';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    table();
    stringstream ss;
    getline(cin, s);
    ss << s;
    ss >> n;

    while(n--){
        ss.clear();
        getline(cin, s);
        
        ss << s;

        while(ss >> Code)
            cout << Morse[Code];
        cout << "\n";
    }

    return 0;
}