// sets , maps
#include <iostream>
#include <map>
using namespace std;

//sets
void sample1(){

}

void sample2(){
    map <string, string> m;

    m.insert(make_pair("apple", "5"));
    m.insert(make_pair("apple2", "6"));
    
    map <string, string> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << "->" << (*it).second << endl;
    }
    cout << endl;
    cout << m["apple"] << endl;

}

int main(){
    sample2();
}