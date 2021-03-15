#include <iostream>
using namespace std;
int main(){
int a, t = 0;    
cin >> a;   
int ar[a];
    for (int i = 0; i < a; i++){        
        cin >> ar[i];        
        if(ar[i] <= 437){           
            cout << "Crash" << " " << i + 1;            
            t = 1;            
            break;        
        }
    }            
    if (t == 0){            
    cout << "No crash";            
    }
}               
 