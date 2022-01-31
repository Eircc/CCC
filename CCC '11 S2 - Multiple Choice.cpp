#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> s;
    vector<char> a;
    for (int i = 0; i < n; i++){
        char x;
        cin >> x;
        s.push_back(x);
    }
    for (int i = 0; i < n; i++){
        char x;
        cin >> x;
        a.push_back(x);
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == a[i]) ans++;
    }
    cout << ans;
    return 0;
}
