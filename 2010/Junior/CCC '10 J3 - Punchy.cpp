#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    while (true){
        int x;
        cin >> x;
        if (x == 1){
            char c;
            int y;
            cin >> c >> y;
            if (c == 'A') a = y;
            else b = y;
        }
        else if (x == 2){
            char c;
            cin >> c;
            if (c == 'A') cout << a << endl;
            else cout << b << endl;
        }
        else if (x == 3){
            char c, d;
            cin >> c >> d;
            if (c == 'A'){
                if (d == 'A') a *= 2;
                else a += b;
            }
            else {
                if (d == 'A') b += a;
                else b *= 2;
            }
        }
        else if (x == 4){
            char c, d;
            cin >> c >> d;
            if (c == 'A'){
                if (d == 'A') a *= a;
                else a *= b;
            }
            else {
                if (d == 'A') b *= a;
                else b *= b;
            }
        }
        else if (x == 5){
            char c, d;
            cin >> c >> d;
            if (c == 'A'){
                if (d == 'A') a = 0;
                else a -= b;
            }
            else {
                if (d == 'A') b -= a;
                else b = 0;
            }
        }
        else if (x == 6){
            char c, d;
            cin >> c >> d;
            if (c == 'A'){
                if (d == 'A') a = 1;
                else a /= b;
            }
            else {
                if (d == 'A') b /= a;
                else b = 1;
            }
        }
        else break;
    }
}
