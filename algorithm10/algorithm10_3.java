import java.io.*;
import java.util.*;

class Main {
    static int log2(int x){
        return (int) (Math.log(x) / Math.log(2));
    }
    
    static int getPosOfRightmostSetBit(int n) {
        return log2(~n&(n+1)) + 1;
    }                 
    
    static int setRightmostUnsetBit(int n) {
        if (n == 0)
            return 1;
        if ((n & (n + 1)) == 0)
            return n;
        
        int pos = getPosOfRightmostSetBit(n);
        return ((1 << (pos - 1)) | n);
    }
    
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        System.out.println(setRightmostUnsetBit(n));
        
	}
}