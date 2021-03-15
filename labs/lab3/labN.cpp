#include <iostream>
#include <cmath>
using namespace std;
int main(){
 
long long n,l;

cin >> n;

int a[n];

for(int i = 0; i < n; ++i){
    cin >> a[i];
}
for(int i = 0; i < n; ++i){
    l = pow(a[i],2);
    cout << l << " ";
}
}