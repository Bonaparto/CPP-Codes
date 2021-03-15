#include <iostream>
using namespace std;
int main(){
int a;    
    cin >> a;    
    int ar[a];
    for (int i=0; i < a; i++){
        cin >> ar[i];        
        if (ar[i]<=437){            
        cout << "Crash" << " " << i + 1;            
        break; 
        }
        else cout << "No crash";              
    }
}
