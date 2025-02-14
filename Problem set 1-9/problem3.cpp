#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double box, sideL, prem, genAd;

    
    cout << "Enter tickets sold on Box: ";
    cin >> box;

    cout << "Enter tickets sold on sideline: ";
    cin >> sideL;

    cout <<"Enter tickets sold on premium: " ;
    cin >> prem;

    cout << "Enter tickets sold on general admission: ";
    cin >> genAd;

    cout << "250\t" << box << endl; 
    cout <<  "100\t" << sideL << endl;
    cout <<  "50\t" << prem << endl;
    cout <<  "25\t" << genAd << endl;

    double allTickets = box + sideL + prem + genAd;

    cout << "Total tickets sold: " << allTickets << endl;


   
    double boxSales = box * 250;
    double sideLSales = sideL * 100;
    double premSales = prem * 50;
    double genAdSales = genAd * 25;

    double totalSales = boxSales + sideLSales + premSales + genAdSales;


    cout << "Total Sales: " << fixed << setprecision(2) << totalSales << endl;


    return 0;
}