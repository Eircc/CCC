#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        char y;
        cin >> x >> y;
        for (int j = 0; j < x; j++){
            cout << y;
        }
        cout << "\n";
    }
}
