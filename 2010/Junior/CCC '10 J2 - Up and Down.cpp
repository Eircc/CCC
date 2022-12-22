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
    int a, b, c, d, s;
    cin >> a >> b >> c >> d >> s;

    int ni = 0;
    int x = s / (a + b);
    ni = x * (a - b);
    x = s % (a + b);
    if (x <= a) ni += x;
    else{
        ni += a;
        x -= a;
        ni -= x;
    }

    int by = 0;
    x = s / (c + d);
    by = x * (c - d);
    x = s % (c + d);
    if (x <= c) by += x;
    else{
        by += c;
        x -= c;
        by -= x;
    }

    if (ni > by) cout << "Nikky" << endl;
    else if (ni == by) cout << "Tied" << endl;
    else cout << "Byron" << endl;
}
