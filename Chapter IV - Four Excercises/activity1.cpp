#include <iostream>
#include <string>
using namespace std;

// Function declarations
void greeting(); // Function to display a welcome message
string courseName(string name); // Function to return a course name, truncated if longer than 25 characters
void gradeCalculations(); // Function to handle grade inputs and calculations

int main(){
    greeting(); // Call the function to display a welcome message
    cout << courseName("CS 121 C++ Programming") << endl; // Display the truncated course name
    gradeCalculations(); // Call the function to input and calculate grades

    return 0; // Exit the program
}

// Function to return a course name, truncated if longer than 25 characters
string courseName(string name){
    string courseNameCode;
    if(name.length() >= 25){
        courseNameCode = name.substr(0, 25); // If course name is too long, truncate it
    } else {
        courseNameCode = name; // Otherwise, use the full course name
    }
    return courseNameCode; // Return the course name
}

// Function to display a welcome message
void greeting(){
    cout << "Welcome to students grade book for\n"; // Display welcome message
}

// Function to handle grade inputs and calculations
void gradeCalculations(){
    const int numofStudents{10}; // Number of students
    double studentCount[numofStudents]; // Array to store student grades
    double totalGrade{}; // Variable to store total grades
    double classAverage; // Variable to store class average

    // Loop to input grades for each student
    for(int i = 0; i < numofStudents; i++){
        cout << "Enter grade: ";
        cin >> studentCount[i];
    }

    // Loop to calculate total grades
    for(int i = 0; i < numofStudents; i++){
        totalGrade += studentCount[i];
    }

    classAverage = totalGrade / numofStudents; // Calculate class average

    // Display total grades and class average
    cout << "Total of all " << numofStudents << " is " << totalGrade << endl;
    cout << "Class average is " << classAverage;
}
