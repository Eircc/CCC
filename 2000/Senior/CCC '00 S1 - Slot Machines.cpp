#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int q, a, b, c;
    cin >> q >> a >> b >> c;
    int ans = 0;
    while (q > 0){
        a++;
        q--;
        ans++;
        if (a == 35){
            q += 30;
            a = 0;
        }

        if (q > 0){
            b++;
            q--;
            ans++;
            if (b == 100){
                q += 60;
                b = 0;
            }
        }
        
        if (q > 0){
            c++;
            q--;
            ans++;
            if (c == 10){
                q += 9;
                c = 0;
            }
        }
    }
    cout << "Martha plays " << ans << " times before going broke." << endl;
}
