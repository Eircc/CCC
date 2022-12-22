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
    vector<string> d;
    vector<string> s;
    while (true) {
        string a, b;
        cin >> a >> b;
        d.push_back(a);
        if (b == "SCHOOL") break;
        s.push_back(b);
    }
    for (int i = d.size() - 1; i > 0; i--){
        if (d[i] == "L") d[i] = "RIGHT";
        else d[i] = "LEFT";
        cout << "Turn " << d[i] << " onto " << s[i - 1] << " street." << endl;
    }
    if (d[0] == "L") cout << "Turn RIGHT into your HOME." << endl;
    else cout << "Turn LEFT into your HOME." << endl;
}
