#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int Agent[4];
int Enemy[4];
bool falstflg = true;
void Updatetable(int Ax,int Ay,int Ex,int Ey);
int table[30][20];



/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    //最初に1度だけ呼ばれるーーーーーーーーーーーー
    if(falstflg){

    for(int i = 0 ; i < 30 ;i++ ){
        for(int j = 0; j < 20 ; j++){
            table[i][j] = -1;
            }
        }


        falstflg = false;
    }
    //ここまでーーーーーーーーーーーーーーーーーーーー


    while (1) {
        int N;
        int P;
        cin >> N >> P; cin.ignore();
        for (int i = 0; i < N; i++) {

            if(i == 0){
            //自分の初期位置
            int X0;
            int Y0;
            //敵プレイヤーの現在のXY
            int X1;
            int Y1;
            cin >> X0 >> Y0 >> X1 >> Y1; cin.ignore();
            Agent[0] = X0;
            Agent[1] = Y0;
            Agent[2] = X1;
            Agent[3] = Y1;
            }

            if(i == 1){
            //敵プレイヤーの初期XY
            int X0;
            int Y0;
            //敵プレイヤーの現在のXY
            int X1;
            int Y1;
            cin >> X0 >> Y0 >> X1 >> Y1; cin.ignore();

            Enemy[0] = X0;
            Enemy[0] = Y0;
            Enemy[0] = X1;
            Enemy[0] = Y1;
            }

        }


        Updatetable(Agent[2],Agent[3],Enemy[2],Enemy[3]);


        // Write an action using cout. DON'T FORGET THE "<< endl"
         //cerr << "X:" << Agent[3] << endl;
        if(table[Agent[2]-1][Agent[3]] == -1){
            cout << "LEFT" << endl;
        }else
        if(table[Agent[2]+1][Agent[3]] == -1){
            cout << "RIGHT" << endl;
        }else
        if(table[Agent[2]][Agent[3]-1] == -1){
            cout << "DOWN" << endl;
        }else
        if(table[Agent[2]][Agent[3]+1] == -1){
            cout << "UP" << endl;
        }

    }
}


void Updatetable(int Ax,int Ay,int Ex,int Ey){
    //自分は0敵は1埋まっていない所は-1

    table[Ax][Ay] = 0;
    table[Ex][Ey] = 1;

}
