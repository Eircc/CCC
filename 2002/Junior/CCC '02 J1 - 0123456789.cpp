#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1 || n == 4){
        cout << "\n";
    }
    else {
        cout << " * * *" << endl;
    }
    if (n == 1 || n == 2 || n == 3 || n == 7){
        for (int i = 0; i < 3; i++){
            cout << "      *\n";
        }
    }
    else if (n == 5 || n == 6){
        for (int i = 0; i < 3; i++){
            cout << "*\n";
        }
    }
    else {
        for (int i = 0; i < 3; i++){
            cout << "*     *\n";
        }
    }
    if (n == 0 || n == 1 || n == 7){
        cout << "\n";
    }
    else {
        cout << " * * *\n";
    }
    if (n == 1 || n == 3 || n == 4 || n == 5 || n == 7 || n == 9){
        for (int i = 0; i < 3; i++){
            cout << "      *\n";
        }
    }
    else if (n == 2){
        for (int i = 0; i < 3; i++){
            cout << "*\n";
        }
    }
    else{
        for (int i = 0; i < 3; i++){
            cout << "*     *\n";
        }
    }
    if (n == 1 || n == 4 || n == 7){
        cout << "\n";
    }
    else {
        cout << " * * *\n";
    }
}
