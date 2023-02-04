#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    map<char, vector<int>> keyboard;
    keyboard['A'] = {0, 0};    
    keyboard['B'] = {1, 0};    
    keyboard['C'] = {2, 0};    
    keyboard['D'] = {3, 0};    
    keyboard['E'] = {4, 0};    
    keyboard['F'] = {5, 0};    
    keyboard['G'] = {0, 1};    
    keyboard['H'] = {1, 1};    
    keyboard['I'] = {2, 1};    
    keyboard['J'] = {3, 1};    
    keyboard['K'] = {4, 1};    
    keyboard['L'] = {5, 1};    
    keyboard['M'] = {0, 2};    
    keyboard['N'] = {1, 2};    
    keyboard['O'] = {2, 2};    
    keyboard['P'] = {3, 2};    
    keyboard['Q'] = {4, 2};    
    keyboard['R'] = {5, 2};    
    keyboard['S'] = {0, 3};    
    keyboard['T'] = {1, 3};    
    keyboard['U'] = {2, 3};    
    keyboard['V'] = {3, 3};    
    keyboard['W'] = {4, 3};    
    keyboard['X'] = {5, 3};    
    keyboard['Y'] = {0, 4};    
    keyboard['Z'] = {1, 4};    
    keyboard[' '] = {2, 4};    
    keyboard['-'] = {3, 4};    
    keyboard['.'] = {4, 4};      

    int n = 0;
    vector<int> pos = {0, 0};
    for (int i = 0; i < s.length(); i++){
        n += abs(pos[0] - keyboard[s[i]][0]);
        n += abs(pos[1] - keyboard[s[i]][1]);
        pos = keyboard[s[i]];
    }
    n += abs(pos[0] - 5);
    n += abs(pos[1] - 4);
    cout << n;
}
