#include <bits/stdc++.h>
using namespace std;

int SumOfDigits(string a, int sum, int i){
    if(i >= a.size()){ return sum;}
    else{
    sum += int(a[i]) - 48;
    return SumOfDigits(a, sum, i + 1);
    }   
}

int main(){
    string n;
    cin >> n;
    cout << SumOfDigits(n, 0, 0);
}