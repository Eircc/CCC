#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int q, n;
    cin >> q >> n;
    vector<int> dmojistan;
    vector<int> pegland;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        dmojistan.push_back(x);
    }
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        pegland.push_back(x);
    }
    sort(dmojistan.begin(), dmojistan.end());
    sort(pegland.begin(), pegland.end());
    int ans = 0;
    if (q == 1){
        for (int i = 0; i < n; i++){
            ans += max(dmojistan[n - i - 1], pegland[n - i - 1]);
        }
    }
    else{
        for (int i = 0; i < n; i++){
            ans += max(dmojistan[i], pegland[n - i - 1]);
        }
    }
    cout << ans << endl;
}
