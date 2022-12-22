#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a;
    vector<string> b;
    for (int i = 0; i < n; i++){
        string x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++){
        string x;
        cin >> x;
        b.push_back(x);
    }
    map<string, string> p;
    bool ans = true;
    for (int i = 0; i < n; i++){
        if (p.count(a[i])){
            if (p[a[i]] != b[i]){
                ans = false;
                break;
            }
        }
        else if (p.count(b[i])){
            if (p[b[i]] != a[i]){
                ans = false;
                break;
            }
        }
        else {
            p.insert(pair<string, string> (a[i], b[i]));
            p.insert(pair<string, string> (b[i], a[i]));
            if (a[i] == b[i]){
                ans = false;
                break;
            }
        }
    }
    if (ans == true) cout << "good" << endl;
    else cout << "bad" << endl;
}
