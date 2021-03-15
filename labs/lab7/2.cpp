#include<iostream>
using namespace std;
int rec(int a){
    return a==0? 0: a%2+10*rec(a/2);
}
int main(){
    int a;
    cin >>a;
    cout<<rec(a);
}