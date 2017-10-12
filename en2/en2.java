
import java.io.*;
import java.util.*;

public class en2 {
public static void main ( String[] args ) throws Exception {

		Stack<String> stack = new Stack<String>();
		int x = 0;
		int y = 0;
		String s = "0";

		BufferedReader br =
			new BufferedReader(new InputStreamReader(System.in));

		//System.out.println("問題番号を入れてください");

	 	String[] str = br.readLine().split(",");
		//int mondaiI = Integer.parseInt(mondai);

		for(int i = 0; i < str.length;i++){
			stack.push(str[i]);

			if(!isNumber(str[i])){
				s =  stack.pop();
				x =  Integer.parseInt(stack.pop());
				y =	 Integer.parseInt(stack.pop());

				switch(s){
					case "*": stack.push(String.valueOf(y*x)); break;
					case "/": stack.push(String.valueOf(y/x)); break;
					case "-": stack.push(String.valueOf(y-x)); break;
					case "+": stack.push(String.valueOf(y+x)); break;
					default: break;
				}

			}

		}
		System.out.println(stack.pop());

	}
	public static boolean isNumber(String s){
		try {
	   		Integer.parseInt(s);
	   			return true;
	   		} catch (NumberFormatException e) {
	   			return false;
   		}
	}

}
