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
    int n;
    cin >> n;
    vector<int> readings;
    set<int> d;
    vector<int> freq;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        readings.push_back(x);
        d.insert(x);
    }
    vector<int> diff(d.begin(), d.end());
    for (int i = 0; i < diff.size(); i++){
        int c = 0;
        for (int j = 0; j < readings.size(); j++){
            if (readings[j] == diff[i]) c++;
        }
        freq.push_back(c);
    }
    int max = *max_element(freq.begin(), freq.end());
    int c = 0;
    for (int i = 0; i < freq.size(); i++){
        if (freq[i] == max) c++;
    }
    if (c == 1){
        auto it = find(freq.begin(), freq.end(), max);
        int i = it - freq.begin();
        int a = diff[i];
        freq[i] = -1;
        int second = *max_element(freq.begin(), freq.end());
        c = 0;
        for (int i = 0; i < freq.size(); i++){
            if (freq[i] == max) c++;
        }
        if (c == 1){
            it = find(freq.begin(), freq.end(), second);
            i = it - freq.begin();
            int b = diff[i];
            int ans = abs(a - b);
            cout << ans << endl;
        }
        else {
            vector<int> temp;
            for (int i = 0; i < freq.size(); i++){
                if (freq[i] == second){
                    temp.push_back(abs(a - diff[i]));
                }
            }
            int ans = *max_element(temp.begin(), temp.end());
            cout << ans << endl;
        }
    }
    else {
        vector<int> temp;
        for (int i = 0; i < freq.size(); i++){
            if (freq[i] == max){
                temp.push_back(diff[i]);
            }
        }
        int a = *max_element(temp.begin(), temp.end());
        int b = *min_element(temp.begin(), temp.end());
        int ans = a - b;
        cout << ans << endl;
    }
}
