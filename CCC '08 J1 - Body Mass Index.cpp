#include <bits/stdc++.h>

using namespace std;

int main() {
    float w, h;
    cin >> w >> h;
    float bmi = w / h / h;
    if (bmi > 25) cout << "Overweight";
    else if (bmi < 18.5) cout << "Underweight";
    else cout << "Normal weight";
    return 0;
}
