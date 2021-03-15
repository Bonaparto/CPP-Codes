#include <iostream>
using namespace std;
int main(){

int Y;
cin >> Y;

    if(Y % 4 == 0 && Y % 400 == 0){
        if(Y > 1000) 
        cout << "12/09/" << Y;
        else if (Y < 1000 && Y > 100) 
        cout << "12/09/0" << Y; 
        else if (Y < 100 && Y > 10) 
        cout << "12/09/00" << Y; 
        else if(Y < 10) 
        cout << "12/09/000" << Y;
    }
    else if((Y <= 400 || Y >= 400) && Y % 4 == 0){
        if (Y < 100 && Y > 10) 
        cout << "12/09/00" << Y; 
        else if(Y < 10) 
        cout << "12/09/000" << Y;
        else if(Y >= 100 && Y < 1000) 
        cout << "12/09/0" << Y;
        else if(Y >= 400 && Y <= 9999)
        cout << "12/09/" << Y;
    }
    else if(Y % 4 != 0){
        if(Y % 4 != 0 && Y < 9999 && Y >= 1000)
        cout << "13/09/" << Y;
        else if(Y % 4 != 0 && Y < 1000 && Y >= 100)
        cout << "13/09/0" << Y;
        else if(Y % 4 != 0 && Y < 100 && Y >= 10)
        cout << "13/09/00" << Y;
        else if(Y % 4 != 0 && Y < 10)
        cout << "13/09/000" << Y;
    }    
}