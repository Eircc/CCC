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
    int h, m;
    cin >> h >> m;
    bool ans = true;
    for (int i = 1; i < m; i++){
        if (-6*i*i*i*i + h*i*i*i + 2*i*i + i <= 0){
            cout << "The balloon first touches ground at hour:\n" << i << "\n";
            ans = false;
            break;
        }
    }
    if (ans == true) cout << "The balloon does not touch ground in the given time.\n";
}
