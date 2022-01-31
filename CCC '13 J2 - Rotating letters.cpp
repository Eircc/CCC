#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> x = {'I', 'O', 'S', 'H', 'Z', 'X', 'N'};
    bool ans = true;
    for (int i = 0; i < s.length(); i++){
        if (count(x.begin(), x.end(), s[i]) == 0){
            ans = false;
            break;
        }
    }
    if (ans) cout << "YES";
    else cout << "NO";
    return 0;
}
