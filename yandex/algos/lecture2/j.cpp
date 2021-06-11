#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float n, x, x1, min = -1, min1 = -1, max = 1e9;
    cin >> n >> x1;
    n--;
    string s; bool f = 1;
    while(n--)
    {
        cin >> x >> s;
        float temp_min, temp_max;
        min1 = min;
        if(s == "further")
        {
            if(x > x1)
            {   
                temp_min = 30;
                temp_max = (x + x1) / 2.0;
            }
            else if(x <= x1)
            {
                temp_min = (x + x1) / 2.0;
                temp_max = max;
            }
            if(temp_min > min) min = temp_min;
            if(temp_max < max) max = temp_max;
        }
        else
        {
            if(x < x1)
            {   
                temp_min = 30;
                temp_max = (x + x1) / 2.0;
            }
            else if(x >= x1)
            {   
                temp_min = 30;
                temp_max = max;
            }
            if(temp_min > min) min = temp_min;
            if(temp_max < max) max = temp_max;
        }
        x1 = x;
    }
    cout << setprecision(6);
    if(max == 1e9) cout << min1 << " " << min;
    else cout << min << " " << max;
}