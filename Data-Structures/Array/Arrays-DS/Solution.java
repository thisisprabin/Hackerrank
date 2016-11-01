import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int test = in.nextInt();
        int arr[] = new int[test];
        for(int i=0; i<test; i++){
            arr[i] = in.nextInt();
        }
        
        for(int i=test-1; i>=0; i--){
            System.out.print(arr[i]+" ");
        }
    }
}