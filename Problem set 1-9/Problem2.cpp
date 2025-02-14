#include <iostream>
#include <iomanip>

using namespace std;

void taxCalc();

int main(){

    taxCalc();

    return 0;
}


void taxCalc(){

    double assVal{};
    double taxableAmount{};
    const double taxRate100 = 1.05;
    double propTax{};

    cout << "Enter the assessed value: ";
    cin >> assVal;

    taxableAmount = assVal * 0.92;
    propTax = (taxableAmount / 100) * taxRate100;

    cout << fixed << setprecision(2);
    cout << "Assessed Value: " << assVal << endl;    
    cout << "Taxable Amount: " << taxableAmount << endl;
    cout << "Tax Rate for each 100.00: " << taxRate100 << endl;
    cout << "Property Tax: " << propTax << endl;

    return 0;
}