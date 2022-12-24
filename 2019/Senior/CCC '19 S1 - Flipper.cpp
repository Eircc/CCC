#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int h = 0;
    int v = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'H') h++;
        else v++;
    }
    if (h % 2 == 0 && v % 2 == 0){
        cout << "1 2" << endl;
        cout << "3 4" << endl;
    }
    else if (h % 2 == 1 && v % 2 == 0){
        cout << "3 4" << endl;
        cout << "1 2" << endl;
    }
    else if (h % 2 == 0 && v % 2 == 1){
        cout << "2 1" << endl;
        cout << "4 3" << endl;
    }
    else{
        cout << "4 3" << endl;
        cout << "2 1" << endl;
    }
}
