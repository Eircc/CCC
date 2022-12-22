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

int main()  
{
    int m, n, k;
    cin >> m >> n >> k;
    vector<int> rows(m, 0);
    vector<int> cols(n, 0);
    for (int i = 0; i < k; i++){
        char a;
        int b;
        cin >> a >> b;
        if (a == 'R') rows[b - 1]++;
        else cols[b - 1]++;
    }
    int ans = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if ((rows[i] + cols[j]) % 2 == 1) ans++;
        }
    }
    cout << ans << endl;
}
