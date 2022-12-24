#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    float w, h;
    cin >> w >> h;
    float bmi = w/(h*h);
    if (bmi > 25) cout << "Overweight" << endl;
    else if (bmi >= 18.5) cout << "Normal weight" << endl;
    else cout << "Underweight" << endl;
}
