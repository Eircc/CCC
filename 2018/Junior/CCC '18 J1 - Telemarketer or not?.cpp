#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 8 || a == 9){
        if (d == 8 || d == 9){
            if (b == c) cout << "ignore" << endl;
            else cout << "answer" << endl;
        }
        else cout << "answer" << endl;
    }
    else cout << "answer" << endl;
}
