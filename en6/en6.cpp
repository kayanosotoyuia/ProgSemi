/*
nを入力した時,フィボナッチ数列n番目値Fnを返すfibメソッドを完成させましょう

*/


#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>

using namespace std;

int fib(int n);



int main()
{

    int n = 7;

    cout << fib(n) << endl;


}

int fib(int n){

    if(n == 0){
		return 0;
	}else if(n == 1){
		return 1;
	}else{
		return fib(n - 1) + fib(n - 2);
	}
    
}
