#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a >= 3 and b <= 4) cout << "TroyMartian" << endl;
    if (a <= 6 and b >= 2) cout << "VladSaturnian" << endl;
    if (a <= 2 and b <= 3) cout << "GraemeMercurian" << endl;
    return 0;
}
