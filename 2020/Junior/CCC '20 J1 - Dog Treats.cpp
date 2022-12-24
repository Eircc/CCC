#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int h = a + 2 * b + 3 * c;
    if (h >= 10) cout << "happy" << endl;
    else cout << "sad" << endl;
}
