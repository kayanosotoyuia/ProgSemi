

import java.io.*;
public class en4 {
    public static void main ( String[] args ) throws Exception {

        int tate = 4;
        int yoko = 5;

        int syougaiX = 2;
        int syougaiY = 2;

        int[][] num = new int[tate][yoko];
        boolean[][] flg = new boolean[tate][yoko];


        for(int i = 0; i < tate ; i++){
            for(int j = 0; j < yoko; j++){
                flg[i][j] = true;
            }
        }
        flg[syougaiX][syougaiY] = false;

        for(int i = 0; i < tate ; i++){
            for(int j = 0; j < yoko; j++){
                if(flg[i][j]){

                    if(i != 0 || j != 0){
                        if(i == 0){
                            num[i][j] = num[i][j-1];
                        }else if(j == 0){
                            num[i][j] = num[i-1][j];
                        }else{
                            num[i][j] = num[i-1][j]+num[i][j-1];
                        }
                    }else{
                        num[0][0] = 1;
                    }

                }else{
                    num[i][j] = 0;
                }
            }
        }
        for(int i = 0; i < tate ; i++){
            for(int j = 0; j < yoko; j++){
                System.out.print(num[i][j]);
                System.out.print(" ");
                if(j == yoko-1){
                    System.out.println(" ");
                }
            }
        }
        // System.out.println(num[tate-1][yoko-1]);

	}
}
