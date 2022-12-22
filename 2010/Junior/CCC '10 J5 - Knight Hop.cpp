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

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<vector<int>> q = {{a, b, 0}};
    while (q.empty() == false){
        if (q[0][0] == c && q[0][1] == d) break;
        if (q[0][0] + 1 <= 8 && q[0][1] + 2 <= 8) q.push_back({q[0][0] + 1, q[0][1] + 2, q[0][2] + 1});
        if (q[0][0] + 2 <= 8 && q[0][1] + 1 <= 8) q.push_back({q[0][0] + 2, q[0][1] + 1, q[0][2] + 1});
        if (q[0][0] + 2 <= 8 && q[0][1] - 1 >= 1) q.push_back({q[0][0] + 2, q[0][1] - 1, q[0][2] + 1});
        if (q[0][0] + 1 <= 8 && q[0][1] - 2 >= 1) q.push_back({q[0][0] + 1, q[0][1] - 2, q[0][2] + 1});
        if (q[0][0] - 1 >= 1 && q[0][1] - 2 >= 1) q.push_back({q[0][0] - 1, q[0][1] - 2, q[0][2] + 1});
        if (q[0][0] - 2 >= 1 && q[0][1] - 1 >= 1) q.push_back({q[0][0] - 2, q[0][1] - 1, q[0][2] + 1});
        if (q[0][0] - 2 >= 1 && q[0][1] + 1 <= 8) q.push_back({q[0][0] - 2, q[0][1] + 1, q[0][2] + 1});
        if (q[0][0] - 1 >= 1 && q[0][1] + 2 <= 8) q.push_back({q[0][0] - 1, q[0][1] + 2, q[0][2] + 1});
        q.erase(q.begin());
    } 
    cout << q[0][2] << endl;
}
