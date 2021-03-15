#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a;
	a=1;
	cin>>n;
	while(a*a<=n){
		cout<<a*a<<endl;
		a=a+1;
	}
}