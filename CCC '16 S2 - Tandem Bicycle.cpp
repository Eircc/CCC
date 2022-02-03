#include <bits/stdc++.h>

using namespace std;

int main() {
    int q, n;
    cin >> q >> n;
    vector<int> Dmojistan;
    vector<int> Pegland;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        Dmojistan.push_back(x);
    }
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        Pegland.push_back(x);
    }
    int total = 0;
    if (q == 1){
        sort(Dmojistan.begin(), Dmojistan.end());
        sort(Pegland.begin(), Pegland.end());
        for (int i = 0; i < n; i++){
            total += max(Dmojistan[i], Pegland[i]);
        }
        cout << total;
    }
    else{
        sort(Dmojistan.begin(), Dmojistan.end());
        sort(Pegland.begin(), Pegland.end(), greater<int>());
        for (int i = 0; i < n; i++){
            total += max(Dmojistan[i], Pegland[i]);
        }
        cout << total;
    }
    return 0;
}
