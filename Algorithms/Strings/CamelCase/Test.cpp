#include<iostream>
using namespace std;

int main(){
    
    int count = 0;
    string str;
    
    cin >> str;
    
    for(int i=0; str[i]; i++){
        if(str[i] >= 65 && str[i] <= 90){
            count++;
        }
    }
    
    cout << count+1 <<endl;
    
    return 0;
}
