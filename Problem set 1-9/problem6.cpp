#include <iostream>
using namespace std;

int main() {
    double numbers[10];
    double numElements = sizeof(numbers) / sizeof(numbers[0]);
    double largestNumber = numbers[0];

    for(int i = 0 ; i < 10; i++){
        cout << "Enter a number: ";
        cin >> numbers[i];
    }

    for (int i = 1; i < numElements; ++i) {
        if (numbers[i] > largestNumber) {
            largestNumber = numbers[i];
        }
    }

    cout << "The largest number in the array is: " << largestNumber << endl;

    return 0;
}
