#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string strings = "";
    string turns = "";
    string x;
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i])){
            turns += s[i];
            if (i == s.length() - 1 || isalpha(s[i + 1])){
                cout << strings << " " << x << " " << turns << endl;
                strings = "";
                turns = "";
            }
        }
        else if (s[i] == '+') x = "tighten";
        else if (s[i] == '-') x = "loosen";
        else {
            strings += s[i];
        }
    }
}
