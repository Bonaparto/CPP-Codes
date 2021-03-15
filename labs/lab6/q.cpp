#include <iostream>
#include <iomanip>
using namespace std;

float ops(float a,int b){
    float p = 0;
    p = b / (a / 100); 
}

int main(){
    int a,g;
    cin >> a >> g;
    cout << setprecision(5) << ops(a,g);
}