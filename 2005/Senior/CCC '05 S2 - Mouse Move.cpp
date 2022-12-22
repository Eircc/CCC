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
    int c, r;
    int x = 0;
    int y = 0;
    cin >> c >> r;
    while (true){
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        x += a;
        y += b;
        if (x < 0) x = 0;
        if (y < 0) y = 0;
        if (x > c) x = c;
        if (y > r) y = r;
        cout << x << " " << y << endl;
    }
}
