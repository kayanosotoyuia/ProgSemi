/*
    かぶりの無いn個の数字を決めてください
    n-1個の不等号を決めてください

*/


#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int count1 = 0;
    int count2 = 0;

  vector<int> num;
    num.push_back ( 3 );
    num.push_back ( 1 );
    num.push_back ( 14 );
    num.push_back ( 5 );
    num.push_back ( 21 );

    sort(num.begin(), num.end() );

  int ans[5];

  string str[4] = {"<","<",">",">"};


  for(int i = 0; i < 4; i++){
      if(str[i] == "<"){
          ans[i] = num[count1];
          count1++;
      }
      if(str[i] == ">"){
          ans[i] = num[4-count2];
          count2++;
      }
  }

  ans[4] = num[count1];

  for(int i =0; i < 5; i++){
      cout << ans[i] << " " << endl;
  }

    return 0;
}
