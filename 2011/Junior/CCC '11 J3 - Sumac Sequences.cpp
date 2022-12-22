#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> s;
    s.push_back(a);
    s.push_back(b);
    while (true){
        if (s[s.size() - 2] - s[s.size() - 1] >= 0){
            s.push_back(s[s.size() - 2] - s[s.size() - 1]);
        }
        if (s[s.size() - 2] < s[s.size() - 1]) break;
    }
    cout << s.size() << endl;
}
