	
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
    int w, n;
    cin >> w >> n;
    vector<int> cars;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        cars.push_back(x);
    }
    int ans = 0;
    cars.push_back(0);
    cars.push_back(0);
    cars.push_back(0);
    cars.insert(cars.begin(), 0);
    cars.insert(cars.begin(), 0);
    cars.insert(cars.begin(), 0);
    for (int i = 3; i < cars.size(); i++){
        if (cars[i] + cars[i-1] + cars[i-2] + cars[i-3] <= w) ans++;
        else break;
    }
    if (ans > n) cout << ans - 3;
    else cout << ans;
}
