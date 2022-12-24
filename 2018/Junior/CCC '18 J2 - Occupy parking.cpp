#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string a, b;
    int ans = 0;
    cin >> a >> b;
    for (int i = 0; i < n; i++){
        if (a[i] == b[i] && a[i] == 'C') ans++;
    }
    cout << ans << endl;
}
