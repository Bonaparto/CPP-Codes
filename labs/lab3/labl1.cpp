#include<iostream>
#include <algorithm>
using namespace std;
int main(){
 int n,m;
 cin >> n;
 int a[n];
 for(int i=0; i<n; i++){
 cin >> a[i];
 }
 cin >> m;
 int b[m];
 for(int j=0; j<m; j++){
 cin >> b[j];
 }
 int c[n+m];
 for(int i=0; i<n; i++){
 c[i]=a[i];
 }
 for(int j=0; j<m; j++){
 c[n+j] = b[j];
 }
 int length3=n+m;
 sort(c, c+length3);
 for(int k=0; k<n+m; k++){
 cout << c[k] << " ";
 }
}