#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    int len=n,wid=m,k=1,p=0,i=0;
    while(k<=n*m){
        for(i=p;i<wid;i++){
            arr[p][i]=k++;
        } 
        for(i=p+1;i<len;i++){
            arr[i][wid-1]=k++;
            } 
        for(i=wid-2;i>=p;i--){
            arr[len-1][i]=k++;
            }
        for(i=len-2;i>p;i--){
            arr[i][p]=k++; 
        } 
        p++, len--,wid--;;    
    }    
    if(!(n*m)%2){
        arr[(n+1)/2][(m+1)/2]=n*m;
    }
    for(i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout.width(4);
            cout<< arr[i][j];
        } 
        cout<<endl;
    }
    return 0;
}