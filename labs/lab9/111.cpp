#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, n;
	int top = -1;
    int hist[n];
    int stack[n];
    cin >> n;
    int htop;
    int maxarea = -1;
    int newarea;
    for(i = 0; i < n; i++){
        cin >> hist[i];	
    }
    for(i = 0; i < n; i++){
        if(top == -1 || hist[stack[top]] <= hist[i]){
            ++top;
            stack[top] = i;
        }
        else{
            while((hist[stack[top]] > hist[i]) && (top > -1)){
                htop = stack[top];
                top--;
                newarea= hist[htop] * ((top == -1) ? i : (i - stack[top] - 1));
                if(newarea > maxarea)
                    maxarea = newarea;
            }
            top++;
            stack[top] = i;
        }
    }
    while(top > -1){
        htop = stack[top];
        top--;
        newarea = hist[htop] * ((top == -1) ? i : (i - stack[top] - 1));
        if(newarea > maxarea)
            maxarea = newarea;
    }
    cout << maxarea;			 
}