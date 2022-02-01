#include <bits/stdc++.h>

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
    cout << accumulate(nums.begin(), nums.end(), 0);
    return 0;
}
