#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (a == 1) ans += 461;
    else if (a == 2) ans += 431;
    else if (a == 3) ans += 420;

    if (b == 1) ans += 100;
    else if (b == 2) ans += 57;
    else if (b == 3) ans += 70;

    if (c == 1) ans += 130;
    else if (c == 2) ans += 160;
    else if (c == 3) ans += 118;

    if (d == 1) ans += 167;
    else if (d == 2) ans += 266;
    else if (d == 3) ans += 75;

    cout << "Your total Calorie count is " << ans << "." << endl;
}
