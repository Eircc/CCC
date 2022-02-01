#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int antonia = 100, david = 100;
    for (int i = 0; i < n; i++){
        int a, d;
        cin >> a >> d;
        if (a < d) antonia -= d;
        else if (d < a) david -= a;
    }
    cout << antonia << endl;
    cout << david << endl;
    return 0;
}
