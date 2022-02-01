#include <bits/stdc++.h>

using namespace std;

int main() {
    int i;
    cin >> i;
    if (i == 1 or i == 9 or i == 10) cout << '1';
    else if (i == 2 or i == 3 or i == 7 or i == 8) cout << '2';
    else cout << '3';
    return 0;
}
