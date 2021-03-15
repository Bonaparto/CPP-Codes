#include <iostream>
#include<algorithm>
using namespace std; 
 
int intersect(int arr1[], int arr2[],int n){ 
int cnt=0;
int i = 0, j = 0; 
    while (i < n && j < n) { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else{ 
            cnt++;
            i++; 
            j++; 
        } 
    }   
    return cnt;
} 
            
int main(){ 
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }   
    for(int i=0; i < n; i++){
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    cout << intersect(arr1, arr2,n); 
            
 return 0; 
}