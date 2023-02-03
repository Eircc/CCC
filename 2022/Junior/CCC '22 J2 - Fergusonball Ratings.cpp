#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    int g = 0;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (a * 5 - b * 3 > 40) g++;
    }
    cout << g;
    if (g == n) cout << "+";
}
