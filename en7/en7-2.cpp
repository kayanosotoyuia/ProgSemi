/*
卍ぼろの伊豆卍
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
void setdot();
int getdotnum(int i, int j);

int canpas[7][7];
int dot[3][3];//dot番号,x,y


int main()
{
    //初期値の設定
    resetcanpas();
    //点を設定
    setdot();

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            cout <<  getdotnum(i,j);
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

void setdot(){

    canpas[1][6] = 1 ;
    canpas[3][2] = 2 ;
    canpas[5][2] = 3 ;

    dot[0][0] = 1;
    dot[0][1] = 1;
    dot[0][2] = 6;

    dot[1][0] = 2;
    dot[1][1] = 3;
    dot[1][2] = 2;

    dot[2][0] = 3;
    dot[2][1] = 5;
    dot[2][2] = 2;

}

int getdotnum(int i, int j){

    double ans,tmp;
    double dist[3];

    ans = 1;

    dist[0] = sqrt((i-dot[0][1])*(i-dot[0][1]) + (j-dot[0][2])*(j-dot[0][2]));
    dist[1] = sqrt((i-dot[1][1])*(i-dot[1][1]) + (j-dot[1][2])*(j-dot[1][2]));
    dist[2] = sqrt((i-dot[2][1])*(i-dot[2][1]) + (j-dot[2][2])*(j-dot[2][2]));

    tmp = 1000;

    for(int i =0; i < 3; i++){
        if(tmp == dist[i]){
            ans = 9;
            tmp = dist[i];
        }
        if(tmp > dist[i] && tmp != dist[i] ){
            ans = i;
            tmp = dist[i];
        }
    }

    return ans;
}
