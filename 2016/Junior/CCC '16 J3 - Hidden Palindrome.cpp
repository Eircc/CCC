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
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 1; i <= s.length(); i++){
        for (int j = 0; j < s.length() - i + 1; j++){
            string t = s.substr(j, i);
            string u = t;
            reverse(t.begin(), t.end());
            if (t == u) ans = i;
        }
    }
    cout << ans << endl;
}
