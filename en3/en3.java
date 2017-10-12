
import java.io.*;
import java.util.*;


public class en3 {
public static void main ( String[] args ) throws Exception {


        System.out.println("頂点の数を入力してください");
		BufferedReader br =
			new BufferedReader(new InputStreamReader(System.in));

        String s = br.readLine();
        int v = Integer.parseInt(s);

        int test[] = new int[v];



        System.out.println("次数を入力してください(,区切り)");
        String[] str = br.readLine().split(",");


        for(int i = 0; i < v ; i++){
            test[i] = Integer.parseInt(str[i]);
        }


        if(CanOneLine(test)){
            System.out.println("できる");
        }else{
            System.out.println("できない");
        }


	}
	public static boolean CanOneLine(int test[]){
        String s1;
        int tmp;
        int count = 0;

        for(int i = 0; i< test.length;i++){
            if(test[i]%2 == 1){
                count++;
            }
        }

        if(count%2 == 0){
            return true;
        }else{
            return false;
        }

	}

}
