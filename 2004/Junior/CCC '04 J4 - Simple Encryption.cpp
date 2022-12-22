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
    string a, b;
    cin >> a;
    cin.ignore();
    getline(cin, b);
    vector<int> code;
    for (int i = 0; i < a.length(); i++){
        code.push_back(int(a[i]) - 65);
    }
    string s = "";
    for (int i = 0; i < b.length(); i++){
        if (65 <= int(b[i]) && int(b[i]) <= 90) s.push_back(b[i]);
    }
    int x = code.size();
    string ans = "";
    for (int i = 0; i < s.length(); i++){
        ans.push_back(char((int(s[i]) - 65 + code[i % x]) % 26 + 65));
    }
    cout << ans << endl;
}
