import java.util.*;
public class Test {
	public static void main(String... args) {
		
		Scanner in = new Scanner(System.in);
		
		int a = in.nextInt();
		int b = in.nextInt();
		int c = in.nextInt();
		
		int num1 = 0, num2 = 0, num3 = 0;
		
		LinkedList<Integer> head1 = new LinkedList<Integer>();
		LinkedList<Integer> head2 = new LinkedList<Integer>();
		LinkedList<Integer> head3 = new LinkedList<Integer>();

		for(int i=0; i<a; i++){
			int data = in.nextInt();
			head1.add(data);
			num1 += data;
		}
		for(int i=0; i<b; i++){
			int data = in.nextInt();
			head2.add(data);
			num2 += data;
		}
		for(int i=0; i<c; i++){
			int data = in.nextInt();
			head3.add(data);
			num3 += data;
		}
		
		while(true) {
			if(num1 == num2 && num2 == num3 && num1 == num3){
				System.out.println(num1);
				break;
			} else {
				if(num1 < num2 && num1 < num3){
					num2 = num2 - head2.getFirst();
					head2.removeFirst();
					num3 = num3 - head3.getFirst();
					head3.removeFirst();
				} else if(num2 < num1 && num2 < num3){
					num1 = num1 - head1.getFirst();
					head1.removeFirst();
					num3 = num3 - head3.getFirst();
					head3.removeFirst();
				} else if(num3 < num1 && num3 < num2) {
					num1 = num1 - head1.getFirst();
					head1.removeFirst();
					num2 = num2 - head2.getFirst();
					head2.removeFirst();
				} else if(num1 == num2 && num1 < num3 && num2 < num3){
					num3 = num3 - head3.getFirst();
					head3.removeFirst();
				} else if(num1 == num2 && num1 > num3 && num2 > num3){
					num1 = num1 - head1.getFirst();
					head1.removeFirst();
					num2 = num2 - head2.getFirst();
					head2.removeFirst();
				} else if(num2 == num3 && num2 < num1 && num3 < num1) {
					num1 = num1 - head1.getFirst();
					head1.removeFirst();
				} else if(num2 == num3 && num2 > num1 && num3 > num1){
					num2 = num2 - head2.getFirst();
					head2.removeFirst();
					num3 = num3 - head3.getFirst();
					head3.removeFirst();
				} else if(num1 == num3 && num1 < num2 && num3 < num2) {
					num2 = num2 - head2.getFirst();
					head2.removeFirst();
				} else if(num1 == num3 && num1 > num2 && num3 > num2) {
					num1 = num1 - head1.getFirst();
					head1.removeFirst();
					num3 = num3 - head3.getFirst();
					head3.removeFirst();
				}
			}
		}
		in.close();
	}
}
