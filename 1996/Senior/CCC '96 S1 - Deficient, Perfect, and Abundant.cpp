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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int sum = 0;
        for (int i = 1; i < x; i++)
        {
            if (x % i == 0)
                sum += i;
        }
        if (sum == x)
            cout << x << " is a perfect number.\n";
        else if (sum < x)
            cout << x << " is a deficient number.\n";
        else
            cout << x << " is an abundant number.\n";
    }
}
