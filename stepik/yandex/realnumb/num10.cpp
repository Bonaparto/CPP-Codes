    #include <iostream>
    #include <cmath>
    using namespace std;
    int main(){
        double a, b, c;
        cin >> a >> b >> c;
        double d = pow(b, 2) - 4 * a * c;
        if(d < 0) cout << 0;
        else if(d == 0) cout << 1 << -(b / (2 * a));
        else{
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            cout << 2 << min(x1, x2) << " " << max(x1, x2);
        }
    }