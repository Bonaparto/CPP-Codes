#include <iostream>
using namespace std;

int min4(int one,int two,int three,int four){
    return min(min(one,two),min(three,four));
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << min4(a,b,c,d);
}