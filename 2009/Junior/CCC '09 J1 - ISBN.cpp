#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 91 + a + b * 3 + c;
    cout << "The 1-3-sum is " << ans << endl;
}
