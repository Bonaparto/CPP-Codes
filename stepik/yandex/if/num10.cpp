#include <iostream>
using namespace std;
int main(){
    int A,B,C,A1,B1,C1;
    cin >> A >> B >> C >> A1 >> B1 >> C1;
    if(A * B * C > A1 * B1 * C1 && ((A >= B1 && B >= B1 
    && C >= B1) || (A >= C1 && B >= C1 && C >= C1) ||(A >= A1 && B >= A1 && C >= A1)))
    cout << "The first box is larger than the second one";
    
    else if(A * B * C = A1 * B1 * C1 && ((A <= A1 && B <= A1 
    && C <= A1) || (A <= B1 && B <= B1 
    && C <= B1) || (A <= C1 && B <= C1 && C <= C1)))
    cout << "The first box is smaller than the second one";
    
    else if(A * B * C == A1 * B1 * C1) cout << "Boxes are equal";
}

