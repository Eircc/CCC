#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    int rwidth, rheight, cwidth, cheight, steps;
    cin >> rwidth >> rheight >> cwidth >> cheight >> steps;
    vector<vector<int>> room (rheight, vector<int> (rwidth, 0));
    for (int i = 0; i < cheight; i++){
        for (int j = 0; j < cwidth; j++){
            room[i][j] = 1;
            room[i][rwidth - 1 - j] = 1;
            room[rheight - 1 - i][j] = 1;
            room[rheight - 1 - i][rwidth - 1 - j] = 1;
        }
    }

    int x = cwidth;
    int y = 0;

    for (int i = 0; i < steps; i++){
        if (y == 0) {
            if (room[y][x + 1] == 0) {
                room[y][x] = 1;
                x++;
            }
            else {
                room[y][x] = 1;
                y++;
            }
        }
        else if (x == rwidth - 1) {
            if (room[y + 1][x] == 0) {
                room[y][x] = 1;
                y++;
            }
            else {
                room[y][x] = 1;
                x--;
            }
        }
        else if (y == rheight - 1) {
            if (room[y][x - 1] == 0) {
                room[y][x] = 1;
                x--;
            }
            else {
                room[y][x] = 1;
                y--;
            }
        }
        else if (x == 0){
            if (room[y - 1][x] == 0) {
                room[y][x] = 1;
                y--;
            }
            else {
                room[y][x] = 1;
                x++;
            }
        }
        else if (room[y][x + 1] == 1 && room[y][x - 1] == 1 && room[y +1][x] == 1 && room[y - 1][x] == 1){
            break;
        }
        else if (room[y - 1][x] == 1 && room[y][x - 1] == 1){
            if (room[y][x + 1] == 0) {
                room[y][x] = 1;
                x++;
            }
            else {
                room[y][x] = 1;
                y++;
            }
        }
        else if (room[y - 1][x] == 1 && room[y][x + 1] == 1) {
            if (room[y + 1][x] == 0) {
                room[y][x] = 1;
                y++;
            }
            else {
                room[y][x] = 1;
                x--;
            }
        }
        else if (room[y + 1][x] == 1 && room[y][x + 1] == 1) {
            if (room[y][x - 1] == 0) {
                room[y][x] = 1;
                x--;
            }
            else {
                room[y][x] = 1;
                y--;
            }
        }
        else if (room[y + 1][x] == 1 && room[y][x - 1] == 1) {
            if (room[y - 1][x] == 0){
                room[y][x] = 1;
                y--;
            }
            else {
                room[y][x] = 1;
                x++;
            }
        }
        else if (room[y - 1][x] == 1 && room[y][x + 1] == 0){
            room[y][x] = 1;
            x++;
        }
        else if (room[y][x + 1] == 1 && room[y + 1][x] == 0){
            room[y][x] = 1;
            y++;    
        }
        else if (room[y + 1][x] == 1 && room[y][x - 1] == 0){
            room[y][x] = 1;
            x--;
        }
        else if (room[y][x - 1] == 1 && room[y - 1][x] == 0){
            room[y][x] = 1;
            y--;
        }
    }
    
    cout << x + 1 << endl;
    cout << y + 1 << endl;
}
