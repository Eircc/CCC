#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int x = 0, y = 0;
    x += a * 3;
    x += b * 2;
    x += c;
    y += d * 3;
    y += e * 2;
    y += f;
    if (x > y) cout << "A";
    else if (x == y) cout << "T";
    else cout << "B";
    return 0;
}
