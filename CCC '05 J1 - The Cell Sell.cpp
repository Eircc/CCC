#include <bits/stdc++.h>

using namespace std;

int main() {
    int day, evening, wknd;
    cin >> day >> evening >> wknd;
    float a = 0, b = 0;
    if (day > 100) a += (day - 100) * 0.25;
    a += evening * 0.15;
    a += wknd * 0.2;
    if (day > 250) b += (day - 250) * 0.45;
    b += evening * 0.35;
    b += wknd * 0.25;
    cout << "Plan A costs " << a << endl;
    cout << "Plan B costs " << b << endl;
    if (a > b) cout << "Plan B is cheapest.";
    else if (a == b) cout << "Plan A and B are the same price.";
    else cout << "Plan A is cheapest.";
    return 0;
}
