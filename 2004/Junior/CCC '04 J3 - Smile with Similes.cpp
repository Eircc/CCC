#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int n, m;
    vector<string> adjectives;
    vector<string> nouns;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        string x;
        cin >> x;
        adjectives.push_back(x);
    }
    for (int i = 0; i < m; i++){
        string x;
        cin >> x;
        nouns.push_back(x);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << adjectives[i] << " as " << nouns[j] << endl;
        }
    }
}
