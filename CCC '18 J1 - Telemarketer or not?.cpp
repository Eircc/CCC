#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == 8 or a == 9) and (d == 8 or d == 9) and b == c) cout << "ignore";
    else cout << "answer";
    return 0;
}
