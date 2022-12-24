#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int apples = a*3 + b*2 + c;
    int bananas = d*3 + e*2 + f;
    if (apples > bananas) cout << "A" << endl;
    else if (bananas > apples) cout << "B" << endl;
    else cout << "T" << endl;
}
