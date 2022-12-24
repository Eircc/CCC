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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int y, m, d;
        cin >> y >> m >> d;
        if (y < 1989) cout << "Yes\n";
        else if (y == 1989 && m < 2) cout << "Yes\n";
        else if (y == 1989 && m == 2 && d <= 27) cout << "Yes\n";
        else cout << "No\n"; 
    }
}
