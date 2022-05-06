#include <iostream>

using namespace std;

int main() {
    int q, a, b, c;
    cin >> q >> a >> b >> c;
    int plays = 0;
    while (q > 0){
        q--;
        plays++;
        a++;
        if (a == 35) {
            q += 30;
            a = 0;
        }
        if (q == 0) break;

        q--;
        plays++;
        b++;
        if (b == 100) {
            q += 60;
            b = 0;
        }
        if (q == 0) break;

        q--;
        plays++;
        c++;
        if (c == 10) {
            q += 9;
            c = 0;
        }
        if (q == 0) break;
    }
    cout << "Martha plays " << plays << " times before going broke.";
}
