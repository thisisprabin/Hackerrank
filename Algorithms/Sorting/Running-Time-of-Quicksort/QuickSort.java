import java.util.Scanner;

class QuickSort {
	
    static int countQ = 0;
	static int countI = 0;
	
	public int partition(int array[], int low, int high){
		
		int i = (low-1);
		int p = array[high];
		
		for(int j=low; j<=high-1; j++){
			
			if(array[j] <= p){
				i++;
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				countQ++;
			}
		}
		
		int temp = array[i+1];
		array[i+1] = array[high];
		array[high] = temp;
		countQ++;
		return i+1;
	}
	
	
	public void sort(int array[], int low, int high){
		
		if(low < high){
			int pi = partition(array, low, high);
			sort(array, low, pi-1);
			sort(array, pi+1, high);
		}
	}

    
	public void insertionSort(int array[]){
		for(int i=0; i<array.length; i++){
			int j = i;
			while(j>0){
				if(array[j] < array[j-1]){
					int temp = array[j];
					array[j] = array[j-1];
					array[j-1] = temp;
					countI++;
				}
				j--;
			}
		}
	}
	
	
	public static void main(String...strings){
		
		Scanner in = new Scanner(System.in);
	        QuickSort obj = new QuickSort();
        
        	int size = in.nextInt();
        
        	int[] a = new int[size];
        	int[] b = new int[size];
        
        	for(int i=0; i<size; i++){
        		int value = in.nextInt(); 
        		a[i] = value;
        		b[i] = value;
        	}
        
        	obj.sort(a, 0, size-1);
        	obj.insertionSort(b);
        
        	System.out.println(countI - countQ);
        
        	in.close();
	}
}