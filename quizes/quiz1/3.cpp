#include <iostream>
using namespace std;
int main(){

int N,k = 0;
cin >> N;
int a[N];

for(int i = 0; i < N; ++i){
   cin >> a[i]; 
}
for(int i = 0; i < N; ++i){
    if(a[i] > k) k = a[i];
}
int m = a[0];
for(int i = 0; i < N; ++i){
    if(a[i] < m) m = a[i];
}
cout << (k & m);
}