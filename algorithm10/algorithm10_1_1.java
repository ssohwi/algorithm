import java.io.*;
import java.util.*;

class Main {
    // XOR -> 홀수이면 1만큼 감소하고 짝수이면 1만큼 증가
    static boolean isEven(int n) {
        if ((n ^ 1) == n + 1)
            return true;
        else
            return false;
    } 

	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        System.out.print(isEven(n) == true ? "Even" : "Odd");
	}
}