#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    int h = 0;
    int s = 0;
    for (int i = 0; i < a.length() - 2; i++){
        if (a[i] == ':' && a[i+1] == '-'){
            if (a[i+2] == ')') h++;
            else if (a[i+2] == '(') s++;
        }
    }
    if (h == 0 && s == 0) cout << "none" << endl;
    else if (h == s) cout << "unsure" << endl;
    else if (h > s) cout << "happy" << endl;
    else cout << "sad" << endl;
}
