#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n + 1; i++){
        if (i * i > n){
            cout << "The largest square has side length " << i - 1 << ".";
            break;
        }
    }
    return 0;
}
