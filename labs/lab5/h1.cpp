#include <iostream>
using namespace std;
int main(){
   int sum = 0,sum1 = 0;
   string one;
   cin >> one;
   for(size_t i = 0; i < one.size(); ++i){
       int comp = one[i];
       for(size_t l = 0; l < one.size(); ++l){
           if(comp == one[l]) sum++;
       } 
       if(sum1 == 0) sum1 = sum;
       else if(sum1 != sum){
          cout << "NO";
          return 0;
       }
       sum = 0;
   }
  cout << "YES"; 
}