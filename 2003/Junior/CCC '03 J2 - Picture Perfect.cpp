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
    while(true){
        int x;
        cin >> x;
        if (x == 0) break;
        int y = sqrt(x);
        while(x % y != 0) y--;
        int p = 2 * y + 2 * (x / y);
        cout << "Minimum perimeter is " << p << " with dimensions " << y << " x " << x/y << endl;
    }
}
