#include <bits/stdc++.h>
using namespace std;

string NN(int n,string NatN){
    string temp = "";
    if(n == 0){return NatN;}
    while(n != 0){
        temp = char(char(n % 10) - 48) + temp;
        n /= 10;
    }
    return NN(n-1,temp + NatN);    
}

int main(){
    int l;
    cin >> l;
    cout << NN(l, "");
}