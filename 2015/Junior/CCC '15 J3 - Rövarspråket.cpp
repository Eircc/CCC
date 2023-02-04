#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, string> map;
    map['a'] = "a";
    map['b'] = "bac";
    map['c'] = "cad";
    map['d'] = "def";
    map['e'] = "e";
    map['f'] = "feg";
    map['g'] = "geh";
    map['h'] = "hij";
    map['i'] = "i";
    map['j'] = "jik";
    map['k'] = "kil";
    map['l'] = "lim";
    map['m'] = "mon";
    map['n'] = "nop";
    map['o'] = "o";
    map['p'] = "poq";
    map['q'] = "qor";
    map['r'] = "ros";
    map['s'] = "sut";
    map['t'] = "tuv";
    map['u'] = "u";
    map['v'] = "vuw";
    map['w'] = "wux";
    map['x'] = "xuy";
    map['y'] = "yuz";
    map['z'] = "zuz";

    for (int i = 0; i < s.length(); i++){
        cout << map[s[i]];
    }
}
