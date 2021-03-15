//stl - containers, algorithms, iterators.
//vectors
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//vectors
void sample1(){
    vector <int> v;
    int x = -1;
    ///int cnt = -1;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
        ///cnt++;
    }

    /// for(int i = 0; i < cnt; ++i){
    ///     cout << v[i] << " ";
    /// }
    
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
}

void sample2(){
    vector<vector<int> > v;
    vector<int>t;

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j <= i; ++j){
            t.push_back(1);
        }
        v.push_back(t);
        t.clear();
    }
    
    for(int i = 0 ; i < v.size(); ++i) {
        for(int j = 0; j < v[i].size(); ++j){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void sample3(){
    vector <int> v;
    int x;
  
    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
       
    }
    vector<int> :: iterator it;
    // begin включительно, end не включительно в итераторе
    for(it = v.begin(); it < v.end(); ++it){
        cout << (* it) << " ";
    }
}

void sample4(){
    vector <int> v;
    int x;
  
    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break; 
    }
   
    //sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
}

void print(vector<int> v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
}

// void printv(vector<int> * v){
//     v->push.back(12);
//     for(int i = 0; i < v ->size(); ++i){
//         cout << v->[i] << " ";
//     }
// }

void sample5(){
    vector <int> v;
    int x;
  
    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }
    // print(v);
    // printv(&v);
}

void sample6(){
    vector <int> v;
    int x;
  
    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }
}

int main(){
    sample2();
}
