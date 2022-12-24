#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 1; i <= min(a, 10); i++){
        for (int j = 1; j <= min(b, 10); j++){
            if (i + j == 10) ans++;
        }
    }
    if (ans == 1) cout << "There is 1 way to get the sum 10.\n";
    else cout << "There are " << ans << " ways to get the sum 10.\n";
}
