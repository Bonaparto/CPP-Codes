#include <fstream>
#include <map>
using namespace std;
int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string s;
    map <string, int> mp;
    while(fin >> s)
    {
        fout << mp[s] << " ";
        mp[s]++;
    }
}