#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    vector<char> a = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'J', 'K', 'L', 'M', 'P', 'Q', 'R', 'T', 'U', 'V', 'W', 'Y'};
    string s;
    cin >> s;
    bool ans = true;
    for (int i = 0; i < a.size(); i++){
        if (s.find(a[i]) != -1) ans = false;
    }
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}
