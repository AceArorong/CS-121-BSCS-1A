#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int box{}, sideL{}, prem{}, genAd{};

    
    cout << "Enter ticket(box): ";
    cin >> box;

    cout << "Enter ticket(sideL): ";
    cin >> sideL;

    cout << "Enter ticket(prem): ";
    cin >> prem;

    cout << "Enter ticket(genAd): ";
    cin >> genAd;


    cout << "\n\t\t\tTicket Price \t\t\tNumber of Ticket Sold\n";
    cout << "Box: \t\t\t" << 250 << "\t\t\t\t" << box << '\n';
    cout << "Side line: \t\t" << 100 << "\t\t\t\t" << sideL << '\n';
    cout << "Premium: \t\t" << 50 << "\t\t\t\t" << prem << '\n';
    cout << "General Admission: \t" << 25 << "\t\t\t\t" << genAd << '\n';

    box *= 250;
    sideL *= 100;
    prem *= 50;
    genAd *= 25;

    float total = box + sideL + prem + genAd;

    cout << "Total sale amount: " << fixed << setprecision(2) << total;

    return 0;
}
