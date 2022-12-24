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
    for (int i = a; i <= b; i++){
        int c = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0) c++;
        }
        if (c == 4) ans++;
    }
    cout << "The number of RSA numbers between " << a << " and " << b << " is " << ans << endl;
}
