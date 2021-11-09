import java.io.*;
import java.util.*;

class Main {
    static boolean isEven(int n) {
        return ((n & 1)!=1);
    } 
    
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        System.out.print(isEven(n) == true ? "Even" : "Odd");
        
	}
}