#include <bits/stdc++.h>
using namespace std;

int SumOfAlmat(string n,int sum,int i){
    if(i == n.size()) return sum;
    return SumOfAlmat(n, sum + (int(n[i]) - 48) / 2, i + 1);   
}

int main(){
    string n;
    cin >> n;
    cout << SumOfAlmat(n,0,0);
}