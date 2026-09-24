#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double salary;
    int years;

 cout<<"Enter the Salary:";
    cin >> salary;
   
    cout<<"Number of Years:";
    cin>>years;

    double bonus = 0.0;

    if (years > 5) {
        bonus = salary * 0.05;
    }

    cout<<fixed<<setprecision(2)<<bonus << endl;

  

    return 0;
}

