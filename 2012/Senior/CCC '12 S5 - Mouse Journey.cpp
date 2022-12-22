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

int solve(int x, int y, int r, int c, vector<vector<int>> &cats, vector<vector<int>> &memo)
{
    if (memo[x - 1][y - 1] != -1)
        return memo[x - 1][y - 1];
    else
    {
        if (cats[x - 1][y - 1] == 1)
        {
            memo[x - 1][y - 1] = 0;
            return 0;
        }
        if (x == r && y == c)
        {
            memo[x - 1][y - 1] = 1;
            return 1;
        }

        int temp = 0;
        if (x < r)
            temp += solve(x + 1, y, r, c, cats, memo);
        if (y < c)
            temp += solve(x, y + 1, r, c, cats, memo);
        memo[x - 1][y - 1] = temp;
        return temp;
    }
}

int main()
{
    int r, c, k;
    cin >> r >> c >> k;
    vector<vector<int>> cats(r, vector<int>(c, 0));
    for (int i = 0; i < k; i++)
    {
        int x, y;
        scanf("%i%i", &x, &y);
        cats[x - 1][y - 1] = 1;
    }
    vector<vector<int>> memo(r, vector<int>(c, -1));
    cout << solve(1, 1, r, c, cats, memo) << endl;
}
