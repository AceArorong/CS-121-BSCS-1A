#include <iostream>
#include <iomanip>

using namespace std;

double calculateCallCost(double minutes);

int main() {

    double callDuration{};


    cout << "Enter the number of minutes the call lasted: ";
    cin >> callDuration;

    
    double amountDue = calculateCallCost(callDuration);


    cout << "The amount due is: $" << fixed << setprecision(2) << amountDue << endl;

    return 0;
}


double calculateCallCost(double minutes){
    const double connectionFee = 1.99;
    const double firstThreeMinutesCost = 2.00;
    const double additionalMinuteCost = 0.45;

    double totalCost;
    if (minutes <= 3) {
        totalCost = connectionFee + firstThreeMinutesCost;
    } else {
        double additionalMinutes = minutes - 3;
        totalCost = connectionFee + firstThreeMinutesCost + (additionalMinutes * additionalMinuteCost);
    }
    
    return totalCost;
}