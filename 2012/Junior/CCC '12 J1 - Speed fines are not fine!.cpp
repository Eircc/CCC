#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b <= a) cout << "Congratulations, you are within the speed limit!" << endl;
    else if (b - a <= 20) cout << "You are speeding and your fine is $100." << endl;
    else if (b - a <= 30) cout << "You are speeding and your fine is $270." << endl;
    else if (b - a >= 31) cout << "You are speeding and your fine is $500." << endl;
}
