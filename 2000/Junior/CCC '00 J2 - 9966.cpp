#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    vector<char> n = {'2', '3', '4', '5', '7'};
    for (int i = a; i <= b; i++){
        string num = to_string(i);
        string temp = "";
        for (int j = 0; j < num.length(); j++){
            if (count(n.begin(), n.end(), num[j])) break;
            else if (num[j] == '6') temp = '9' + temp;
            else if (num[j] == '9') temp = '6' + temp;
            else temp = num[j] + temp;
        }
        if (temp == num) ans++;
    }
    cout << ans;
    return 0;
}
