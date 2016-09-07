import java.util.Scanner;
public class CounterSort {
	
	public void sort(int[] arr, int range){	
		long[] count = new long[range];
		
		for(int i=0; i<range; i++){
			count[arr[i]]++;
		}
		
		printArray(count);
	}
	
	public static void printArray(long[] count){
		for(int i=0; i<100; i++){
			System.out.print(count[i]+" ");
		}
		System.out.println();
	}
	
	public static void main(String...strings){
		Scanner in = new Scanner(System.in);
		CounterSort obj = new CounterSort();
		int size = in.nextInt();
		int[] arr = new int[size];
	
		for(int i=0; i<size; i++){
			arr[i] = in.nextInt();
		}
		obj.sort(arr, size);
		in.close();
	}
}