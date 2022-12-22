#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (true){
        bool ans = false;
        n += 1;
        string x = to_string(n);
        set<char> s;
        vector<char> v;
        for (int i = 0; i < x.length(); i++){
            s.insert(x[i]);
            v.push_back(x[i]);
        }
        if (v.size() == s.size()) ans = true;
        if (ans == true) break;
    }
    cout << n << endl;
}
