#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int k, m;
    cin >> k >> m;
    vector<int> nums;
    for (int i = 1; i <= k; i++){
        nums.push_back(i);
    }
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        vector<int> temp;
        int c = 0;
        for (int j = 0; j < nums.size(); j++){
            c++;
            if (c < x){
                temp.push_back(nums[j]);
            }
            else c = 0;
        }
        nums = temp;
    }
    for (int i = 0; i < nums.size(); i++) cout << nums[i] << endl;
}
