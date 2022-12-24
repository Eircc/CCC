#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<vector<int>> arr(12, vector<int>(12, 0));
    vector<int> coor = {5, 5}; // row, col
    arr[coor[0]][coor[1]] = a;
    a++;
    coor[0]++;
    while (a <= b)
    {
        arr[coor[0]][coor[1]] = a;
        a++;
        if (arr[coor[0] - 1][coor[1]] != 0 && arr[coor[0]][coor[1] + 1] == 0){ // if number above isn't 0, move right
            coor[1]++;
        }
        else if (arr[coor[0]][coor[1] - 1] != 0){ // if number to the left isn't 0, move up
            coor[0]--;
        }
        else if (arr[coor[0] + 1][coor[1]] != 0){ // if number below isn't 0, move left
            coor[1]--;
        }
        else if (arr[coor[0]][coor[1] + 1]!= 0){
            coor[0]++;
        }
    }
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (arr[i][j] != 0)
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
