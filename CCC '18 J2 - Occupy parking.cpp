#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string a, b;
    cin >> n >> a >> b;
    int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == b[i] and a[i] == 'C') count++;
    }
    cout << count;
    return 0;
}
