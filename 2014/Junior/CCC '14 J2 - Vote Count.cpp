#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    string s;
    int n;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++){
        if (s[i] == 'A') a++;
        else b++;
    }
    if (a > b) cout << "A" << endl;
    else if (b > a) cout << "B" << endl;
    else cout << "Tie" << endl;
}
