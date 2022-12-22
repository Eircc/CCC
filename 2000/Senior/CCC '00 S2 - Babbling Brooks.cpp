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
    vector<float> s;
    for (int i = 0; i < n; i++){
        float x;
        cin >> x;
        s.push_back(x);
    }
    while (true){
        int a;
        cin >> a;
        if (a == 77) break;
        else if (a == 99){
            int b, c;
            cin >> b >> c;
            int y = s[b-1];
            s[b-1] = y * c / 100;
            s.insert(s.begin() +b, y - s[b-1]);
        }
        else if (a == 88){
            int b;
            cin >> b;
            s[b-1] = s[b-1] + s[b];
            s.erase(s.begin() + b);
        }
    }

    for (int i = 0; i < s.size(); i++){
        cout << round(s[i]) << " ";
    }
}
