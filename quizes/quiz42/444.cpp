#include <bits/stdc++.h> 
using namespace std; 


int main() 
{
int m;
cin>>m;
vector <int> a;
set <int> b;
int arr[54545];
for(int i=0;i<m;i++){
 cin>>arr[i];
} 
int n;
 cin>>n;
 for(int i=0;i<n;i++){
 int x ;cin>>x;
 a.push_back(x);
}
    for(int i=0;i<m-1;i++){
        for(int j=i;j<m-1;j++){
            int x=arr[i]+arr[j+1];
            b.insert(x);
}
}vector <int> ::iterator it;
for(it=a.begin();it!=a.end();it++)
            {
                if(b.find(*it)==b.end()) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
}