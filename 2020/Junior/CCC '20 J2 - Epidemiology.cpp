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
    int p, n, r;
    cin >> p >> n >> r;
    int c = 0;
    vector<int> i = {n};
    while (n <= p){
        n += i.back() * r;
        i.push_back(i.back() * r);
    }
    cout << i.size() - 1 << endl;
}
