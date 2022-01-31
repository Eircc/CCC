#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int a = 0, b = 0;
    for (int i = 2; i < s.length(); i++){
        if (s[i] == ')'){
            if (s[i - 1] == '-' and s[i - 2] == ':') a++;
        }else if (s[i] == '('){
            if (s[i - 1] == '-' and s[i - 2] == ':') b++;
        }
    }
    if (a > b) cout << "happy";
    else if (b > a) cout << "sad";
    else if (a == 0 and b == 0) cout << "none";
    else cout << "unsure";
    return 0;
}
