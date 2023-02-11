#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
    map<int, vector<int>> graph;
    graph[1] = {4, 7};
    graph[2] = {1};
    graph[3] = {4, 5};
    map<int, vector<int>> req;
    req[7] = {1};
    req[4] = {1, 3};
    req[1] = {2};
    req[5] = {3};
    while (true){
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        else{
            if (graph.find(x) == graph.end()) graph[x] = {y};
            else graph[x].push_back(y);
            if (req.find(y) == req.end()) req[y] = {x};
            else req[y].push_back(x);
        }
    }
    vector<int> tasks;
    for (int i = 1; i < 8; i++){
        if (req.find(i) == req.end()) tasks.push_back(i);
    }

    vector<int> vis;
    if (size(tasks) == 0) cout << "Cannot complete these tasks. Going to bed.";
    else {
        while (size(tasks) > 0){
            vis.push_back(tasks[0]);
            for (int i = 0; i < size(graph[tasks[0]]); i++){
                req[graph[tasks[0]][i]].erase(remove(req[graph[tasks[0]][i]].begin(), req[graph[tasks[0]][i]].end(), tasks[0]), req[graph[tasks[0]][i]].end());
                if (size(req[graph[tasks[0]][i]]) == 0) tasks.push_back(graph[tasks[0]][i]);
            }
            tasks.erase(tasks.begin());
            sort(tasks.begin(), tasks.end());
        }
        if (size(vis) < 7) cout << "Cannot complete these tasks. Going to bed.";
        else {
            for (int i = 0; i < 7; i++){
                cout << vis[i] << " ";
            }
        }
    }

}
