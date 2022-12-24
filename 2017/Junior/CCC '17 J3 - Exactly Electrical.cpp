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
    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;
    int dis = abs(a - c) + abs(b - d);
    if (dis == t) cout << "Y" << endl;
    else if (dis > t) cout << "N" << endl;
    else if ((t - dis) % 2 == 1) cout << "N" << endl;
    else cout << "Y" << endl;
}
