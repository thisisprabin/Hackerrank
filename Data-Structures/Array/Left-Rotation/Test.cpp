#include<iostream>
using namespace std;

int main(){
	
	int n, d, temp;
	cin >> n >> d;
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int data = arr[d];
	int end = 0;
	int i = d;
	
	l1:while(i>end){
		arr[i] = arr[i-1];
		i--;
	}
	
	arr[i] = data;
	
	if(d < n-1){
		d++;
		i = d;
		end++;
		data = arr[d];
		goto l1;
	}
	
	for(int i=0; i<n; i++){
		cout << arr[i] <<" ";
	}
	
	return 0;
}

