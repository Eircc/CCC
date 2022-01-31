#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b and b > c and c > d) cout << "Fish Diving";
    else if (a < b and b < c and c < d) cout << "Fish Rising";
    else if (a == b and b == c and c == d) cout << "Fish At Constant Depth";
    else cout << "No Fish";
    return 0;
}
