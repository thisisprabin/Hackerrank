#include<iostream>
using namespace std;

int main(){
	int key, size, i;
	cin >> key;
	
	cin >> size;
	
	int array[size];
	
	for(i=0; i<size; i++){
		cin >> array[i];
	}
	
	for(i=0; i<size; i++){
		
		if(array[i] == key){
			break;
		}
	}
	
	if(array[i] == key){
		cout << i;
	} else {
		cout << "";
	}
	
	return 0;
}
