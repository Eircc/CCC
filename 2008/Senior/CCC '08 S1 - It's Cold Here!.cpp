#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>

using namespace std;

int main() {
    int a = 200;
    string b;
    while (true){
        int x;
        string y;
        cin >> y >> x;
        if (x < a){
            a = x;
            b = y;
        }
        if (y == "Waterloo") break;
    }
    cout << b << endl;
}
