#include <iostream>
using namespace std;
int main(){

int n,l=0,x=0,z;

cin >> n;
    
    for(int a = 0; a < n; a++){
        cin >> z;
        
        if(z % 2 == 0){
        l++; 
        }   
            
        else x++;
}

cout << l <<" "<< x;    
}