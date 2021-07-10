#include <fstream>
#include <map>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n, x, m; 
    fin >> n;
    map <int, int> mp;
    for(int i = 1; i <= n; ++i)
    { 
        fin >> x;
        mp[i] = x;
    }
    fin >> m;
    for(int i = 0; i < m; ++i)
    {
        fin >> x;
        mp[x]--;
    }
    for(int i = 1; i <= n; ++i)
    {
        fout << (mp[i] < 0 ? "YES":"NO");
        fout << endl;
    }
}