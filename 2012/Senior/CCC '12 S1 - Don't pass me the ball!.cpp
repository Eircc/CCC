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
    int n;
    cin >> n;
    int ans = 0;
    for (int a = 1; a < n; a++){
        for (int b = a + 1; b < n; b++){
            ans += n - b - 1;
        }
    }
    cout << ans;
}
