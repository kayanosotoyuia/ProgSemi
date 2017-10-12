/*
	山本はこの日闇を見た
	それはとても深い闇だった
	彼はまだその深さを知らない・・・

	今日は１８時に帰れるかな？
	１８時現在ゼミすら終わらずタスクだけが積まれたまま・・・
	soccer班帰宅フラグはいつまでたってもfalseのまま・・・
	
*/




import java.io.*;
public class en1 {
public static void main ( String[] args ) throws Exception {
		BufferedReader br =
			new BufferedReader(new InputStreamReader(System.in));

		System.out.println("問題番号を入れてください");

	 	String mondai = br.readLine();
		int mondaiI = Integer.parseInt(mondai);
		switch(mondaiI){
			case 1:

				System.out.println("あなたの名前を入力してください");

 				String s = br.readLine();

				System.out.println("あなたの年齢を入力してください");
				String s2 = br.readLine();

				System.out.print(s);
				System.out.print("さんの年齢は");
				System.out.print(s2);
				System.out.println("歳です");
				break;

			case 2:
				System.out.println("計算する整数を2つ入力してください");

				String s3 = br.readLine();
				String s4 = br.readLine();
				int tmp;
				int num1 = Integer.parseInt(s3);
				int num2 = Integer.parseInt(s4);


				tmp = num1+num2;
				System.out.println("加算"+tmp);
				tmp = num1-num2;
				System.out.println("減算"+tmp);
				tmp = num1*num2;
				System.out.println("乗算"+tmp);
				tmp = num1/num2;
				System.out.println("序算"+tmp);
				tmp = num1%num2;
				System.out.println("あまり"+tmp);
				break;

			case 3:
				System.out.println("整数を入力してください");
				String s5 = br.readLine();
				int suuji = Integer.parseInt(s5);

				if(suuji%2 == 0){
					System.out.println("ぐうすう");
				}else{
					System.out.println("きすう");
				}
				break;

			case 4:
				for(int i = 0; i< 20; i++){
					tmp = i+1;
					if(tmp%3 == 0 && tmp%5 ==0){
						System.out.println("fizzbuzz");
					}else if(tmp%3 == 0){
						System.out.println("fizz");
					}else if(tmp%5 == 0){
						System.out.println("buzz");
					}else{
						System.out.println(tmp);
					}
				}
				break;

			case 5:

				int [] tensu = new int [3];

				System.out.println("テストの点数を入力して");

				String s6 = br.readLine();
				int tensuu = Integer.parseInt(s6);
				tensu[0] = tensuu;
				String s7 = br.readLine();
				int tensuu1 = Integer.parseInt(s7);
				tensu[1] = tensuu1;
				String s8 = br.readLine();
				int tensuu2 = Integer.parseInt(s8);
				tensu[2] = tensuu2;

				System.out.println("1人目"+tensu[0]);
				System.out.println("2人目"+tensu[1]);
				System.out.println("3人目"+tensu[2]);

				break;

			default :
				System.out.println("こんな事してる場合じゃないんだよなあ");
				break;

		}
	}
}
