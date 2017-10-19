

import java.io.*;
import java.io.FileReader;

public class en3 {
public static void main ( String[] args ) throws Exception {
        File file = new File("/Users/k14128kk/Desktop/java/data/data05.txt");
        BufferedReader br = new BufferedReader(new FileReader(file));

        String str;
        String[] strarray = new String[5];
        int[][] num = new int[5][5];

        int count = 0;

        while((str = br.readLine()) != null){
            strarray[count] = str;
            count++;
        }



        for(int i = 0; i < 5; i++){
            String test[] = strarray[i].split(",");

            for(int j = 0; j < 5; j++){
                num[i][j] =  Integer.parseInt(test[j]);
            }
        }

        //判定式

        boolean flg = false;
        int ans = 0,tmp;

        //縦
        for(int i = 0; i < 5; i++){
            tmp = num[i][0];
            count = 0;
            for(int j = 0; j < 5; j++){
                if(tmp == num[i][j]){
                    count++;
                    if(count == 5){
                        flg = true;
                        ans = tmp;
                    }
                }
            }
        }

        //横
        for(int i = 0; i < 5; i++){
            tmp = num[0][i];
            count = 0;
            for(int j = 0; j < 5; j++){
                if(tmp == num[j][i]){
                    count++;
                    if(count == 5){
                        flg = true;
                        ans = tmp;
                    }
                }
            }
        }


        //ななめ
        tmp = num[0][0];
        if(tmp == num[1][1]&&
            tmp == num[2][2]&&
            tmp == num[3][3]&&
            tmp == num[4][4]){
                ans = tmp;
                flg = true;
            }

        tmp = num[0][4];
        if(tmp == num[1][3]&&
            tmp == num[2][2]&&
            tmp == num[3][1]&&
            tmp == num[4][0]){
                ans = tmp;
                flg = true;
            }



        if(flg){
            System.out.println(ans);
        }else{
            System.out.println("引き分け");
        }


	}
}
