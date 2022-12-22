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

int main()  
{
    string d = "left";
    while(true){
        string s;
        cin >> s;
        if (s == "99999") break;
        if ((int(s[0]) + int(s[1])) % 2 == 1) d = "left";
        else if (s[0] == '0' && s[1] == '0');
        else d = "right";
        cout << d << " " << s[2] << s[3] << s[4] << endl;
    }
}
