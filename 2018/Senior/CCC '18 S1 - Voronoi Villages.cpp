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
    vector<double> v;
    for (int i = 0; i < n; i++){
        double x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<double> y;
    for (int i = 1; i < n-1; i++){
        y.push_back((v[i] - v[i-1])/2 + (v[i+1] - v[i])/2);
    }
    sort(y.begin(), y.end());
    cout << fixed << setprecision(1);
    cout << y[0] << endl;
}
