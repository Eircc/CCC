#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    a.push_back(0);
    b.push_back(0);
    for (int i = 1; i < n + 1; i++){
        int x;
        cin >> x;
        a.push_back(a[i-1] + x);
    }
    for (int i = 1; i < n + 1; i++){
        int x;
        cin >> x;
        b.push_back(b[i-1] + x);
    }
    int ans = 0;
    for (int i = 0; i < n + 1; i++){
        if (a[i] == b[i]) ans = i;
    }
    cout << ans << endl;
}
