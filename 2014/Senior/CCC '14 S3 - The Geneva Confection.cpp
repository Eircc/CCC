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
    int t;
    cin >> t;
    for (int test = 0; test < t; test++){
        int n;
        cin >> n;
        stack<int> top;
        stack<int> branch;
        stack<int> lake;
        lake.push(0);
        bool ans = true;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            top.push(x);
        }
        while (true){
            if (top.size() > 0 && top.top() == lake.top() + 1){
                lake.push(top.top());
                top.pop();
            }
            else if (branch.size() > 0 && branch.top() == lake.top() + 1){
                lake.push(branch.top());
                branch.pop();
            }
            else if (top.size() > 0){
                branch.push(top.top());
                top.pop();
            }
            else if (lake.size() == n + 1) break;
            else{
                ans = false;
                break;
            }
        }
        if (ans == true) cout << "Y\n";
        else cout << "N\n";
    }
}
