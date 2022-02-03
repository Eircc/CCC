#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int h = count(s.begin(), s.end(), 'H');
    int v = count(s.begin(), s.end(), 'V');
    if (h % 2 == 0 and v % 2 == 0){
        cout << "1 2" << endl;
        cout << "3 4" << endl;
    }
    else if (h % 2 == 1 and v % 2 == 0){
        cout << "3 4" << endl;
        cout << "1 2" << endl;
    }
    else if (h % 2 == 0 and v % 2 == 1){
        cout << "2 1" << endl;
        cout << "4 3" << endl;
    }
    else {
        cout << "4 3" << endl;
        cout << "2 1" << endl;
    }
    return 0;
}
