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
    int m, n;
    cin >> m >> n;
    vector<int> clubs;
    for (int i = 0; i < n; i++){
        int x;     
        cin >> x;
        clubs.push_back(x);
    }
    vector<int> dp(m + 1, 99999);
    dp[0] = 0;
    for (int i = 1; i <= m; i++){
        dp[i] = 99999;
        for (auto c : clubs){
            if (i - c >= 0){
                dp[i] = min(dp[i], dp[i-c] + 1);
            }
        }
    }
    if (dp[m] == 99999) cout << "Roberta acknowledges defeat." << endl;
    else cout << "Roberta wins in " << dp[m] << " strokes." << endl;
}
