#include <iostream>

using namespace std;

int main(){

    int c = 5; // Initialize integer variable 'c' with value 5

    cout << c << endl; // Print the current value of 'c' (5)
    cout << c++ << endl; // Print the current value of 'c' (5) and then increment 'c' by 1
    cout << c << endl; // Print the new value of 'c' (6)


    cout << endl; // Print a newline for separation

    c = 5; // Reset 'c' to 5

    cout << c << endl; // Print the current value of 'c' (5)
    cout << ++c << endl; // Increment 'c' by 1 and then print the new value of 'c' (6)
    cout << c << endl; // Print the current value of 'c' (6)

    return 0; // Exit the program
}
