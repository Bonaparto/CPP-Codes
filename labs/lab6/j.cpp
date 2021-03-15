#include <iostream>
#include <stdlib.h>
using namespace std;

void op(int n1,int n2,int n3,int n4){
    int c = 0;
    c = max(n1,max(n2,max(n3,n4)));
    cout << c;
    }

int main(){
    int n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;
    op(n1,n2,n3,n4);
}