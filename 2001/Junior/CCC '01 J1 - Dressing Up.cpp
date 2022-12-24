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
    int n;
    cin >> n;
    int x = 1;
    int y = 2;
    for (int i = 0; i < n; i++){
        for (int i = 0; i < x; i++){
            cout << "*";
        }
        for (int i = 0; i < n-x; i++){
            cout << " ";
        }
        for (int i = 0; i < n-x; i++){
            cout << " ";
        }
        for (int i = 0; i < x; i++){
            cout << "*";
        }
        cout << "\n";
        if (x == n) y *= -1;
        x += y;
    }
}
