/*
floodfill
FOOOO!!!詳しい中身は見たらヤバい
*/


#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>

using namespace std;

void resetcanpas();
void setsyougai();
void setfloodfill(int i, int j);

int canpas[7][7];
int c = 1;
int tmp = 0;
double colors[3] = {0,0,0};

int main()
{
    //初期値の設定
    resetcanpas();
    //障害物の設定
    setsyougai();


    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if(canpas[i][j] == -1)
            setfloodfill(i,j);
        }
    }

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if(canpas[i][j] == -1){
                cout <<   "○" ;
            }
            else if(canpas[i][j] == 0){
                cout <<   "□" ;
            }
            else{
                if(canpas[i][j] != colors[0] &&
                   canpas[i][j] != colors[1] &&
                   canpas[i][j] != colors[2] &&
                   canpas[i][j] != 0){

                    colors[tmp] =  canpas[i][j];
                    tmp++;
                   }

                if(colors[0] ==  canpas[i][j]){
                    cout << "\x1b[35m";
                    cout << "□";
                    cout << "\x1b[0m";
                }

                if(colors[1] ==  canpas[i][j]){
                    cout << "\x1b[34m";
                    cout << "□";
                    cout << "\x1b[0m";
                }

                if(colors[2] == canpas[i][j]){
                    cout << "\x1b[32m";
                    cout << "□";
                    cout << "\x1b[0m";
                }

            }
    }cout << " " << endl;
    }

}


void resetcanpas(){
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            canpas[i][j] = -1;
        }
    }

}

void setsyougai(){

    canpas[3][0] = 0 ;
    canpas[3][1] = 0 ;
    canpas[3][2] = 0 ;
    canpas[3][3] = 0 ;
    canpas[3][4] = 0 ;
    canpas[2][5] = 0 ;
    canpas[1][6] = 0 ;

    canpas[2][4] = 0 ;
    canpas[1][3] = 0 ;
    canpas[0][2] = 0 ;


}

void setfloodfill(int i , int j){


    if(canpas[i][j+1] != -1 &&canpas[i][j+1] != 0){
        c = canpas[i][j+1];
    }else if(canpas[i+1][j] != -1 && canpas[i+1][j] != 0){
        c = canpas[i][j+1];
    }else if(canpas[i][j-1] != -1&&canpas[i][j-1] != 0){
        c = canpas[i][j-1];
    }else if(canpas[i-1][j] != -1&& canpas[i-1][j] != 0){
        c = canpas[i-1][j];
    }

    canpas[i][j] = c;


    if(canpas[i][j+1] == -1){
        setfloodfill(i,j+1);
    }else if(canpas[i+1][j] == -1){
        setfloodfill(i+1,j);
    }else if(canpas[i][j-1] == -1){
        setfloodfill(i,j-1);
    }else if(canpas[i-1][j] == -1){
        setfloodfill(i,j-1);
    }


    c++;
    return;

}
