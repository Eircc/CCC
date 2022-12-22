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
    int j, a;
    cin >> j >> a;
    vector<char> jerseys;
    for (int i = 0; i < j; i++)
    {
        char x;
        cin >> x;
        jerseys.push_back(x);
    }
    vector<vector<char>> request(j, vector<char>(0));
    for (int i = 0; i < a; i++)
    {
        char s;
        int n;
        cin >> s >> n;
        request[n - 1].push_back(s);
    }
    int ans = 0;
    for (int i = 0; i < request.size(); i++)
    {
        if (jerseys[i] == 'S')
        {
            for (int j = 0; j < request[i].size(); j++)
            {
                if (request[i][j] == 'S')
                {
                    ans++;
                    break;
                }
            }
        }
        if (jerseys[i] == 'M')
        {
            for (int j = 0; j < request[i].size(); j++)
            {
                if (request[i][j] == 'S' || request[i][j] == 'M')
                {
                    ans++;
                    break;
                }
            }
        }
        if (jerseys[i] == 'L')
        {
            if (request[i].size() > 0)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
