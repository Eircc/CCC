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
        string s;
        cin >> s;
        char x = s[0];
        int c = 0;
        s.push_back(' ');
        for (int j = 0; j < s.length(); j++){
            if (x != s[j]){
                cout << c << " " << x << " ";
                c = 1;
                x = s[j];
            }
            else c++;
        }
        cout << endl;
    }
}
