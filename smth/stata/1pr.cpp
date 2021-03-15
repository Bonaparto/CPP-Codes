#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <double> v; 
    vector <double> modes;
    map <double, int> m;
    float Sum = 0, AbsSubSum = 0, sqrSubSum = 0, sqrSum = 0, MAD = 0, Range = 0, Median = 0; 
    for(int i = 0;; ++i){
        double x; cin >> x;
        if(x == 123123123) break;
        v.push_back(x);
        m[x]++;
        Sum += x;
        sqrSum += x * x;
    }
    double max = 1;
    map <double, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second > max) max = (*it).second;
    }
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second == max) modes.push_back((*it).first);
    }
    sort(v.begin(), v.end());
    Range = abs(v[0] - v[v.size()-1]);
    Median = ((v[(v.size() - 1) / 2] + v[v.size() / 2]) / 2);
    double mean = Sum / v.size();
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] <<  " ";
    }
    cout << endl << "Sub :    AbsSub:" << endl; 
    for(int i = 0; i < v.size(); ++i){
        float Sub = (v[i] - mean);
        AbsSubSum += abs(Sub);
        sqrSubSum += Sub * Sub;
        cout << Sub << " " << abs(Sub) << endl;
    }
    float Variance_of_p = sqrSubSum / v.size(), Standard_deviation_of_p = sqrt(Variance_of_p);
    float Sample_Variance = sqrSubSum / (v.size() - 1), Sample_standard_deviation = sqrt(Sample_Variance);
    cout << endl << "Sum = " << Sum << endl;
    cout << "sqrSum = " << sqrSum << endl;
    cout << "Modes:";
    for(int i = 0; i < modes.size(); ++i){
        cout << v[i] << " ";
    }
    cout << "Median = " << Median << endl;
    cout << "Mean = " << mean << endl;
    cout << "Range = " << Range << endl;
    cout << "sqrSubSum = " << sqrSubSum << endl;
    cout << "AbsSubSum = " << AbsSubSum << endl; 
    cout << "Variance of population = " << Variance_of_p << endl;
    cout << "Standard deviation of population = " << Standard_deviation_of_p << endl;
    cout << "Sample variance of population = " << Sample_Variance << endl;
    cout << "Sample standard deviation of population =  " << Sample_standard_deviation << endl;
}