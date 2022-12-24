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
    int bid = -1;
    string name = "";
    for (int i = 0; i < n; i++)
    {
        int x;
        string y;
        cin >> y >> x;
        if (x > bid)
        {
            bid = x;
            name = y;
        }
    }
    cout << name << endl;
}
