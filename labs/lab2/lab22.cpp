#include <iostream>

using namespace std;

int main() {

int n,m;

cin >> n;

m = n % 2;



if ((m == 0) && (n <= 20) && (n >= 6)){
    
    cout << "Super";
}
    
else if ((m == 0) && (n >= 2) && (n <= 5)){
    cout << "Not Super";
}
else if ((m == 0 )&& (n >= 20)){
    
    cout << "Not Super";
} 
else {
    
    cout << "Super";
} 


    return 0;
}