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
    cin >> a >> b;
    vector<int> x(26, 0);
    vector<int> y(26, 0);
    for (int i = 0; i < a.length(); i++){
        x[int(a[i]) - 97]++;
    }
    for (int i = 0; i < b.length(); i++){
        if (b[i] != '*') y[int(b[i]) - 97]++;
    }
    bool ans = true;
    for (int i = 0; i < 26; i++){
        if (x[i] < y[i]){
            ans = false;
            break;
        }
    }
    if (a.length() == b.length() && ans == true) cout << "A" << endl;
    else cout << "N" << endl;
}
