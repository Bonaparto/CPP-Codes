#include <bits/stdc++.h>
using namespace std;

double distance(double x1,double y1,double x2,double y2){
    return sqrt(pow(abs(x1-x2),2) + pow(abs(y1-y2),2));
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << distance(a,b,c,d);
}