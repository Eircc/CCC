#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d) cout << "Fish Diving" << endl;
    else if (a == b && b == c && c == d) cout << "Fish At Constant Depth" << endl;
    else if (a < b && b < c && c < d) cout << "Fish Rising" << endl;
    else cout << "No Fish" << endl;
}
