#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>

using namespace std;

int main() {
    vector<vector<int>> a(4);
    int x;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> x;
            a[i].push_back(x);
        }
    }
    int sum = a[0][0] + a[0][1] + a[0][2] + a[0][3];
    bool magic = true;
    for (int i = 1; i < 4; i++){
        if (a[i][0] + a[i][1] + a[i][2] + a[i][3] != sum) magic = false;
    }
    for (int i = 0; i < 4; i++){
        if (a[0][i] + a[1][i] + a[2][i] + a[3][i] != sum) magic = false;
    }
    if (magic == true) cout << "magic\n";
    else cout << "not magic\n";
}
