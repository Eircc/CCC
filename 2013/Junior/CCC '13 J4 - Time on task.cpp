#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>

using namespace std;

int main() {
    int t, c;
    cin >> t >> c;
    vector<int> chores;
    int x;
    for (int i = 0; i < c; i++){
        cin >> x;
        chores.push_back(x);
    }
    sort(chores.begin(), chores.end());
    int s = 0;
    int ans = 0;
    for (int i = 0; i < c; i++){
        s += chores[i];
        if (s > t){
            s -= chores[i];
            break;
        }
        ans++;
    }
    cout << ans << endl;
}
