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
    int k;
    string s;
    cin >> k >> s;
    for (int i = 0; i < s.length(); i++){
        int x = int(s[i]) - 65;
        x += 26;
        x -= 3 * (i + 1) + k;
        x %= 26;
        s[i] = char(x + 65);
    }
    cout << s << endl;
}
