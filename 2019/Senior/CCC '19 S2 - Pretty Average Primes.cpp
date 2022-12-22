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

int prime(int x){
    bool ans = true;
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0){
            ans = false;
            break;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++){
        int x;
        cin >> x;
        for (int i = 0; i < x; i++){
            if (prime(x-i) && prime(x+i)){
                cout << x-i << " " << x+i << "\n";
                break;
            }
        }
    }
}
