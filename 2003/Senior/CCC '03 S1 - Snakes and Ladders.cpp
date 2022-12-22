#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int pos = 1;
    while (cin >> n){
        if (n == 0){
            cout << "You Quit!" << endl;
            break;
        }
        pos += n;
        if (pos == 9) pos = 34;
        else if (pos == 40) pos = 64;
        else if (pos == 54) pos = 19;
        else if (pos == 67) pos = 86;
        else if (pos == 90) pos = 48;
        else if (pos == 99) pos = 77;
        if (pos > 100) pos -= n;
        cout << "You are now on square " << pos << endl;
        if (pos == 100){
            cout << "You Win!" << endl;
            break;
        }
    }
    return 0;
}
