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
    int b;
    cin >> b;
    int p = 5 * b - 400;
    cout << p << endl;
    if (p == 100) cout << 0 << endl;
    else if (p > 100) cout << -1 << endl;
    else cout << 1 << endl;
}
