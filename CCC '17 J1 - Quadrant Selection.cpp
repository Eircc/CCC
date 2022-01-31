#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > 0 and b > 0) cout << '1';
    else if (a < 0 and b < 0) cout << '3';
    else if (a > 0 and b < 0) cout << '4';
    else cout << '2';
    return 0;
}
