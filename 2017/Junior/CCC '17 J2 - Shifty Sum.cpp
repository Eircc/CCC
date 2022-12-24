#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int sum = n;
    for (int i = 1; i <= k; i++){
        n *= 10;
        sum += n;
    }
    cout << sum << endl;
}
