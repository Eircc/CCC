#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>
#include <map>
#include <stack>

using namespace std;

int main() {
    int x, m;
    cin >> x >> m;
    int a = -1;
    for (int n = 1; n < m; n++){
        if (x * n % m == 1){
            a = n;
            break;
        }
    }
    if (a != -1) cout << a << endl;
    else cout << "No such integer exists." << endl;
}
