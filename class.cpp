#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Income { 
     string name;
     double value;
 };
 
 struct Expence { 
     string name;
     double value;
 };
 
 struct Asset { 
     string name;
     double value;
 };
 
 
 struct Budget { 
     vector<Income> income;
     vector<Expence> expence;
     vector<Asset> asset;
 
 };
 
 
 int main(){
    Budget budget;
    while(true){
        cout << "enter expence_name: " << endl;
        string expence_nanme;
        getline(cin, expence_nanme);
        cout << "enter expence value: " << endl;
        double expence_value;
        cin >> expence_nanme;
        Expence expence = {expence_nanme, expence_value};
        budget.expence.push_back(expence);
        char dummy;
        cin >> dummy;
    }
        
    }
