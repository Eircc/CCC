#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<char, int> values;
    values['a'] = 1;
    values['b'] = 2;
    values['c'] = 3;
    values['d'] = 1;
    values['e'] = 2;
    values['f'] = 3;
    values['g'] = 1;
    values['h'] = 2;
    values['i'] = 3;
    values['j'] = 1;
    values['k'] = 2;
    values['l'] = 3;
    values['m'] = 1;
    values['n'] = 2;
    values['o'] = 3;
    values['p'] = 1;
    values['q'] = 2;
    values['r'] = 3;
    values['s'] = 4;
    values['t'] = 1;
    values['u'] = 2;
    values['v'] = 3;
    values['w'] = 1;
    values['x'] = 2;
    values['y'] = 3;
    values['z'] = 4;

    map<char, int> button;
    button['a'] = 2;
    button['b'] = 2;
    button['c'] = 2;
    button['d'] = 3;
    button['e'] = 3;
    button['f'] = 3;
    button['g'] = 4;
    button['h'] = 4;
    button['i'] = 4;
    button['j'] = 5;
    button['k'] = 5;
    button['l'] = 5;
    button['m'] = 6;
    button['n'] = 6;
    button['o'] = 6;
    button['p'] = 7;
    button['q'] = 7;
    button['r'] = 7;
    button['s'] = 7;
    button['t'] = 8;
    button['u'] = 8;
    button['v'] = 8;
    button['w'] = 9;
    button['x'] = 9;
    button['y'] = 9;
    button['z'] = 9;

    while (true){
        string s;
        cin >> s;
        if (s == "halt") break;
        int x = 0;
        for (int i = 0; i < s.length(); i++){
            x += values[s[i]];
            if (i > 0 && button[s[i]] == button[s[i - 1]]) x += 2;
        }
        cout << x << endl;
    }
}
