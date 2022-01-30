#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (count(s.begin(), s.end(), 'A') > count(s.begin(), s.end(), 'B')) cout << 'A';
    else if (count(s.begin(), s.end(), 'A') == count(s.begin(), s.end(), 'B')) cout << "Tie";
    else cout << 'B';
    return 0;
}
