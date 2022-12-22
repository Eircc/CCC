#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int i = 0;
    while (true){
        if (a + i * 60 <= b) cout << "All positions change in year " << a + i * 60 << endl;
        else break;
        i++;
    }
    return 0;
}
