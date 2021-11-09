import java.io.*;
import java.util.*;

// 오른쪽에서 6번째 비트값이 0이면 대문자, 1이면 소문자
class Main {
    static String toggleCase(char[] a) {
        for (int i=0; i<a.length; i++) {
            a[i]^=32;
        }
        return new String(a);
    }
    
    public static void main(String[] args) {
        String str = "CheRrY";
        System.out.println("Original string: "+ str);
        
        str = toggleCase(str.toCharArray());
        System.out.println("Toggle case: " + str);
    }
}