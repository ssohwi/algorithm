import java.io.*;
import java.util.*; 
public class Main { 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        
        // 입력
        int N = sc.nextInt(); 
        sc.nextLine(); 
        String[] plans = sc.nextLine().split(" "); 
        int x = 1, y = 1;
        int nx = 0, ny = 0; 
        int[] dx = {0, 0, -1, 1}; 
        int[] dy = {-1, 1, 0, 0}; 
        char[] direc = {'L', 'R', 'U', 'D'};
        
        for (int i = 0; i < plans.length; i++) {
            char plan = plans[i].charAt(0);
            for (int j = 0; j < 4; j++) { 
                if (plan == direc[j]) { 
                    nx = x + dx[j]; 
                    ny = y + dy[j]; 
                } 
            } 
            // 벗어난 경우
            if (nx<1 || ny<1 || nx>N || ny>N) {
                continue;
            }
            // 이동
            x = nx; 
            y = ny; 
        } 
        // 출력
        System.out.println(x + " " + y); 
    } 
}
