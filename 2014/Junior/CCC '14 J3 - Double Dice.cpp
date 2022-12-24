#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int antona = 100;
    int david = 100;
    for (int i = 0; i < n; i++){
        int a, d;
        cin >> a >> d;
        if (a < d) antona -= d;
        else if (d < a) david -= a;
    }
    cout << antona << endl;
    cout << david << endl;
}
