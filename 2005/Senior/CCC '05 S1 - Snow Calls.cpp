#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>
#include <map>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        string ans = "";
        for (int i = 0; i < s.length(); i++){
            if (s[i] != '-'){
                if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') ans.push_back('2');
                else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') ans.push_back('3');
                else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') ans.push_back('4');
                else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') ans.push_back('5');
                else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') ans.push_back('6');
                else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') ans.push_back('7');
                else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') ans.push_back('8');
                else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') ans.push_back('9');
                else ans.push_back(s[i]);
            }
        }
        cout << ans[0] << ans[1] << ans[2] << "-" << ans[3] << ans[4] << ans[5] << "-" << ans[6] << ans [7] << ans[8] << ans[9] << endl;
    }
}
