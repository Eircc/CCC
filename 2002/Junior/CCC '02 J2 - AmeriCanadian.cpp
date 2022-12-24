#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    while (true){
        string s;
        cin >> s;
        if (s == "quit!") break;
        else{
            if (s.length() < 5) cout << s << endl;
            else{
                if (s.back() == 'r' && s[s.length() - 2] == 'o'){
                    if (s[s.length() - 3] != 'a' && s[s.length() - 3] != 'e' && s[s.length() - 3] != 'i' && s[s.length() - 3] != 'o' && s[s.length() - 3] != 'u' && s[s.length() - 3] != 'y'){
                        s.pop_back();
                        s.pop_back();
                        cout << s << "our" << endl;
                    }
                    else cout << s << endl;
                }
                else cout << s << endl;
            }
        }
    }
}
