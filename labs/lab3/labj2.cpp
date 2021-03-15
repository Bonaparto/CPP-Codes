#include<iostream>
using namespace std;
int main(){
 int n, target;
 cin >> n >> target;
 int a[n];
 for(int i=0; i<n; i++){
 cin >>a[i]; 
 }
 int indexOfTarget=0;
 for(int i=0; i<n; i++){
 if(a[i]==target){
 indexOfTarget =i+1;
 }
 else{
 if(target>a[i]){
 indexOfTarget = i+1;
 }
 }
 }
 cout << indexOfTarget << endl;
}