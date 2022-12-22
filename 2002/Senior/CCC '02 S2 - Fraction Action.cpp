#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>
#include <map>
#include <stack>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0) cout << 0 << endl;
    else if (a < b){
        for (int i = 2; i <= a; i++){
            if (a % i == 0 && b % i == 0){
                a /= i;
                b /= i;
            }
        }
        cout << a << "/" << b << endl;
    }
    else if (a % b == 0) cout << a / b << endl;
    else{
        int x = a / b;
        a -= b * x;
        for (int i = 2; i <= a; i++){
            if (a % i == 0 && b % i == 0){
                a /= i;
                b /= i;
            }
        }
        cout << x << " " << a << "/" << b << endl;
    }
}
