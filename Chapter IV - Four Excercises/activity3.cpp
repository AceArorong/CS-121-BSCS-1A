#include <iostream>

using namespace std;

int main(){

    int passes{}; // Counter for passed students
    int failures{}; // Counter for failed students
    int studentCounter{1}; // Counter for the number of students

    int result{}; // Variable to store the input result

    while(studentCounter <= 10){ // Loop until 10 students' results are processed
        cout << "Enter result (1 = pass, 2 = fail): ";
        cin >> result;

        if(result == 1){
            passes += 1; // Increment the pass counter if the result is 1
        } else if(result == 2){
            failures += 1; // Increment the fail counter if the result is 2
        }
        studentCounter += 1; // Increment the student counter
    }
    
    // Display the number of passes and failures
    cout << "Passed " << passes << "\nFailed " << failures << endl;

    // Check if 8 or more students passed and display the tuition message if true
    if(passes >= 8){
        cout << "Raise tuition" << endl;
    }

    return 0; // Exit the program
}
