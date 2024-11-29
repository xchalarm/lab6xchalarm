#include<iostream>
using namespace std;

int main(){
    int countodd=0, counteven=0, num[30];
    int i=0;
    
    while(1){
        cout << "Enter an integer: ";
        cin >> num[i] ; 
        
        if(num[i] == 0){
            break;
        }
        if(num[i] % 2 == 0){
            counteven++;
        }else{
            countodd++ ;
        }
        i++;
    }
    cout << "#Even numbers = "<< counteven << endl;
    cout << "#Odd numbers = " << countodd ;
    return 0;
}

