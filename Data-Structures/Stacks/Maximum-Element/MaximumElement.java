
/*
 * Terminated due to timeout up to Test Case #16 it is running well
 */

import java.util.*;

public class MaximumElement {

	public static void main(String... args) {
		Scanner in = new Scanner(System.in);
		LinkedList<Integer> head = new LinkedList<Integer>();
		
		int test = in.nextInt();
		
		for(int i=0; i<test; i++){
			int ch = in.nextInt();
			
			switch(ch) {
				case 1: int data = in.nextInt();
						head.add(data);
				break;
				
				case 2: head.removeLast();
				break;
				
				case 3: int max = Collections.max(head);
						System.out.println(max);
				break;		
			}
		}
		in.close();
	}
}
