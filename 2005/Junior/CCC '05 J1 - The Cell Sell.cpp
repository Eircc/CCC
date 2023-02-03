#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int daytime, evening, weekend;
    cin >> daytime >> evening >> weekend;
    float a = 0;
    float b = 0;
    if (daytime > 100) a += (daytime - 100) * 0.25;
    a += evening * 0.15;
    a += weekend * 0.2;
    if (daytime > 250) b += (daytime - 250) * 0.45;
    b += evening * 0.35;
    b += weekend * 0.25;
    printf("Plan A costs %.2f\n", a);
    printf("Plan B costs %.2f\n", b);
    if (a > b) cout << "Plan B is cheapest.";
    else if (a == b) cout << "Plan A and B are the same price.";
    else cout << "Plan A is cheapest.";
}
