import java.io.*;
import java.util.*; 
public class Main {
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        
        // 입력
        String place = sc.nextLine();
        int x = place.charAt(1) - '0';
        int y = place.charAt(0) - 'a' + 1;
        int[] dx = {-2, -2, -1, -1, 1, 1, 2, 2};
        int[] dy = {-1, 1, -2, 2, -2, 2, -1, 1};
        int nx, ny;
        int cnt = 0;

        for(int i = 0; i< 8; i++) {
            nx = x + dx[i];
            ny = y + dy[i];
            if(1 <= nx && nx <= 8 && 1 <= ny && ny <= 8 ){
                cnt += 1;
            }
        }
            
        // 출력
        System.out.println(cnt); 
    } 
}
