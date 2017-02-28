#include<iostream>
using namespace std;

int main(){
	
	int a[6][6];
	int i, j;
	int sum = 0;
	
	int total = 0;
	
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			cin >> a[i][j];
		}
	}
	
	i = 0, j = 0;
	
	sum = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			
			total = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
			
			if(total > sum){
				sum = total;
			}
		}
	}
	
	cout << sum;
	return 0;
}
