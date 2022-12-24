#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> m = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x - 1] = 0;
    }
    int sum = 0;
    for (int i = 0; i < m.size(); i++){
        sum += m[i];
    }
    sum /= 10-n;
    int y;
    cin >> y;
    if (y > sum) cout << "deal" << endl;
    else cout << "no deal" << endl;
}
