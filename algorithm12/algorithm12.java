import java.io.*;
import java.util.*;

class Main {
    
	public static void main (String[] args) {
        String[] strs = {"10", "68", "75", "7", "21", "12"};
        List<String> numbers = Arrays.asList(strs);
        
        Collections.sort(numbers, (a, b) -> (b + a).compareTo(a + b));
        
        numbers.stream().forEach(System.out::print);
        
	}
}