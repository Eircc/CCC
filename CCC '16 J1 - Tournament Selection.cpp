#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<char> w;
    for (int i = 0; i < 6; i++){
        char x;
        cin >> x;
        w.push_back(x);
    }
    int c = count(w.begin(), w.end(), 'W');
    if (c >= 5) cout << '1';
    else if (c >= 3) cout << '2';
    else if (c >= 1) cout << '3';
    else cout << "-1";
    return 0;
}
