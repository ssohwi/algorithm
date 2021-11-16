import java.io.*;
import java.util.*;

class Main {
    static void findElement(int arr[], int n) {
        int[] leftMax = new int[n];
        int[] rightMin = new int[n];
        leftMax[0] = Integer.MIN_VALUE;
        rightMin[n-1] = Integer.MAX_VALUE;
              
        for (int i = 1; i < n; i++) {
            if(leftMax[i-1] > arr[i-1]) { 
                leftMax[i] = leftMax[i-1];
            }
            else { 
                leftMax[i] = arr[i-1];
            }
        }
        
        for (int i = n-2; i >= 0; i--) {
            if(rightMin[i+1] > arr[i+1]) { 
                rightMin[i] = arr[i+1];
                
            }
            else { 
                rightMin[i] = rightMin[i+1];
            }
        }
        
        int cnt = 0;
        for (int i=0; i < n; i++) {
            if (leftMax[i] < arr[i] && rightMin[i] > arr[i]) {
                System.out.print(i+" ");
                cnt++;
            }
        }
        if (cnt == 0) {
            System.out.print(-1);
        }
    }
            
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
        
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int n = arr.length;
        
        findElement(arr, n);
        
	}
}