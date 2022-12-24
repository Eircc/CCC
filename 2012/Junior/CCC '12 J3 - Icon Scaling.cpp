#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << '*';
        }
        for (int j = 0; j < n; j++){
            cout << 'x';
        }
        for (int j = 0; j < n; j++){
            cout << '*';
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << ' ';
        }
        for (int j = 0; j < n; j++){
            cout << 'x';
        }
        for (int j = 0; j < n; j++){
            cout << 'x';
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << '*';
        }
        for (int j = 0; j < n; j++){
            cout << ' ';
        }
        for (int j = 0; j < n; j++){
            cout << '*';
        }
        cout << "\n";
    }
}
