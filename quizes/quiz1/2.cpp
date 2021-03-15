#include <iostream>
using namespace std;
int main(){

int t1,t2,t3,t4,t5,t6;
cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6;
    if(t1 + t3 + t5 > t2 + t4 + t6) 
    cout << "Grats Yelnur";
    else if(t1 + t3 + t5 < t2 + t4 + t6) 
    cout << "Hee Hee Losers";
    else cout << "Draw";
}