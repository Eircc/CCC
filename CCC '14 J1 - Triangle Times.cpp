#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (60 == a and a == b and b == c) cout << "Equilateral";
    else if (a + b + c == 180){
        if (a == b or b == c or c == a) cout << "Isosceles";
        else cout << "Scalene";
    }else cout << "Error";
    return 0;
}
