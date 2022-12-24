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
    int n;
    cin >> n;
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < n; i++){
        string a;
        cin >> a;
        int c = a.find(',');
        string b = "";
        for (int j = 0; j < c; j++){
            b.push_back(a[j]);
        }
        a.erase(0, c + 1);
        x.push_back(stoi(b));
        y.push_back(stoi(a));
    }
    int minx = *min_element(x.begin(), x.end()) - 1;
    int maxx = *max_element(x.begin(), x.end()) + 1;
    int miny = *min_element(y.begin(), y.end()) - 1;
    int maxy = *max_element(y.begin(), y.end()) + 1;
    cout << minx << "," << miny << endl;
    cout << maxx << "," << maxy << endl;
}
