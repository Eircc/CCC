#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> adj;
    vector<string> noun;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        adj.push_back(s);
    }
    for (int i = 0; i < m; i++){
        string s;
        cin >> s;
        noun.push_back(s);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << adj[i] << " as " << noun[j] << endl;
        }
    }
    return 0;
}
