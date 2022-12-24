#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> nums;
    for (int i = 0; i < k; i++){
        int x;
        cin >> x;
        if (x == 0) nums.pop_back();
        else nums.push_back(x);
    }
    int sum = 0;
    for (int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    cout << sum << endl;
}
