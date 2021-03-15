#include <iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    int sum = 0, cnt = 1;
    for(size_t i = 0; i < n.size(); ++i){
        sum += int(n[i] - 48);
    }
    if(n.size() == 1){
        cout << sum << " " << 0;
        return 0;
    }
    else{
        while(sum >= 10){
            int sum1 = sum;
            sum = 0;
            while(sum1 != 0){
                sum = sum + sum1 % 10;
                sum1 /= 10; 
            }
            cnt++;
        }
    }
    cout << sum << " " << cnt; 
}