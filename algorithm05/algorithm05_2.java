import java.io.*;
import java.util.*; 
public class Main { 
    public static boolean check(int h, int m, int s) {
        if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3){
            return true;
        }
        return false;
    }

    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        
        // 입력
        int N = sc.nextInt();
        int cnt =0;
        
        for(int h=0; h<=N; h++) {
            for(int m=0; m<60; m++) {
                for(int s=0; s<60; s++) {
                    if(check(h,m,s)){
                        cnt++;
                    }
                }
            }
        }
        
        // 출력
        System.out.println(cnt); 
    } 
}
