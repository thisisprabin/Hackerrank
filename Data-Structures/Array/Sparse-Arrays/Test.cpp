#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	int n, q;
	cin >> n;
	
	char narr[n][21];
	
	for(int i=0; i<n; i++){
		cin >> narr[i];
	}
	
	cin >> q;
	
	int j = 0;
	char qarr[21];
	
	int i=0;
	int count = 0;
	
	cin >> qarr;
	q--;
	
	l1:for(int i=0; i<n; i++){
		if(strcmp(narr[i], qarr) == 0){
			count+=1;
		}	
	}
	
	cout << count << endl;
	count = 0;
	
	if(q > 0){
		cin >> qarr;
		q--;
		goto l1;
	}
	
	return 0;
}
