#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    char object = 'o';
    int y_obj = 0;
    int x_obj = 15;
    const int map_x = 100;
    const int map_y = 20;

    char map[map_y][map_x];
    for (int y = 0; y < map_y; y++){
        for (int x = 0; x < map_x; x++){
            map[y][x] = ' ';
            if (y == map_y - 1){
                map[y][x] = 'X';
            }
        }
    }
    while (true){
        system("cls");
        int x = 0, y = 0;
        int aux_y = y_obj-1;
        if (map[y_obj][x_obj] == ' '){
            map[y_obj++][x_obj] = object;
            map[aux_y][x_obj] = ' ';
        }
        
        for (y = 0; y < map_y; y++){
            for (x = 0; x < map_x; x++){
                cout << map[y][x];
            }
            
            cout << endl;
        }
        Sleep(500);
    }
}