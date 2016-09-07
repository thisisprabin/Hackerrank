import java.io.*;
import java.util.*;

public class Solution {

    public static void insertionSort(int[] ar){	
    	int count = 0;
    	
    	for(int i=1; i<ar.length; ++i){
			int key = ar[i];
			int j = i-1;
			
			while(j>=0 && ar[j] > key){
				ar[j+1] = ar[j];
				j = j -1;
				
				count++;
			}
			ar[j+1] = key;
		}
    	System.out.println(count);
    }
    
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int i=0;i<n;i++){
            ar[i]=in.nextInt();
        }
        insertionSort(ar);
        in.close();
    }
}