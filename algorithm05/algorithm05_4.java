import java.io.*;
import java.util.*; 
public class Main {
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        // 입력
        String S = sc.next();
        ArrayList<Character> arr = new ArrayList<Character>();
        int val = 0;

        for(int i = 0; i< S.length(); i++) {
            if(Character.isLetter(S.charAt(i))) {
                arr.add(S.charAt(i));
            }
            else {
                val += S.charAt(i) - '0';
            }
        }
        
        // 문자열
        Collections.sort(arr);
            
        // 출력 
        for(Character i: arr) {
            System.out.print(i);
        }
        if(val != 0) {
            System.out.println(val);
        }
    } 
}
