#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>

using namespace std;

int main() {
    vector<char> s = {'A', 'B', 'C', 'D', 'E'};
    while (true){
        int a, b;
        cin >> a >> b;
        if (a == 4) break;
        else if (a == 1){
            for (int i = 0; i < b; i++){
                s.push_back(s[0]);
                s.erase(s.begin());
            }
        }
        else if (a == 2){
            for (int i = 0; i < b; i++){
                s.insert(s.begin(), s.back());
                s.pop_back();
            }
        }
        else if (a == 3){
            for (int i = 0; i < b; i++){
                char t = s[1];
                s[1] = s[0];
                s[0] = t;
            }
        } 
    }
    for (int i = 0; i < 5; i++){
        cout << s[i] << " ";
    }
}
