#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int w = 0;
    for (int i = 0; i < 6; i++){
        char x;
        cin >> x;
        if (x == 'W') w++;
    }
    if (w >= 5) cout << "1" << endl;
    else if (w >= 3) cout << "2" << endl;
    else if (w >= 1) cout << "3" << endl;
    else cout << "-1" << endl;
}
