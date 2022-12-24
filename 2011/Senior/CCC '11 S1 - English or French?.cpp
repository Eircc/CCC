#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    int s = 0, t = 0;
    for (int i = 0; i < n; i++){
        string l;
        getline(cin, l);
        for (int j = 0; j < l.length(); j++){
            if (l[j] == 's' or l[j] == 'S') s++;
            else if (l[j] == 't' or l[j] == 'T') t++;
        }
    }
    if (t > s) cout << "English";
    else cout << "French";
    return 0;
}
