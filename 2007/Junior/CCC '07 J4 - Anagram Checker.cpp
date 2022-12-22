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
    string a, b;
    getline(cin, a);
    getline(cin, b);
    vector<int> x(26, 0);
    vector<int> y(26, 0);
    for (int i = 0; i < a.length(); i++){
        if (a[i] != ' ') x[int(a[i]) - 65]++;
    }
    for (int i = 0; i < b.length(); i++){
        if (b[i] != ' ') y[int(b[i]) - 65]++;
    }
    bool ans = true;
    for (int i = 0; i < 26; i++){
        if (x[i] != y[i]){
            ans = false;
            break;
        }
    }
    if (ans) cout << "Is an anagram.";
    else cout << "Is not an anagram.";
}
