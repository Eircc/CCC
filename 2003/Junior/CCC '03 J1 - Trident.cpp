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
    int t, s, h;
    cin >> t >> s >> h;
    for (int i = 0; i < t; i++){
        cout << "*";
        for (int j = 0; j < s; j++){
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < s; j++){
            cout << " ";
        }
        cout << "*\n";
    }
    for (int i = 0; i < 2 * s + 3; i++){
        cout << "*";
    }
    cout << "\n";
    for (int i = 0; i < h; i++){
        for (int j = 0; j < s + 1; j++){
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }
}
