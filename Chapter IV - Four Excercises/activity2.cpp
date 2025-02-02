#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function declarations
void greeting(); // Function to display a welcome message
string courseName(string name); // Function to return a course name, truncated if longer than 25 characters

int main(){
    vector<double> studentsGrades; // Vector to store grades of students
    double grade; // Variable to store a single grade input
    double gradeTotal; // Variable to store the total of all grades

    greeting(); // Call the function to display a welcome message
    cout << courseName("CS 121 C++ Programming") << endl; // Display the truncated course name

    while(true){
        cout <<"Enter grade or -1 to quit: ";
        cin >> grade;

        if(grade == -1){
            break; // Exit the loop if user enters -1
        }
        studentsGrades.push_back(grade); // Add the entered grade to the vector
    }

    for(int i = 0; i < studentsGrades.size(); i++){
        gradeTotal += studentsGrades[i]; // Calculate the total of all grades
    }

    double classAverage = gradeTotal / studentsGrades.size(); // Calculate class average

    cout << "Total of all " << studentsGrades.size() << " is " << gradeTotal << endl; // Display total grades
    cout << "Class average is " << classAverage; // Display class average

    return 0; // Exit the program
}

// Function to display a welcome message
void greeting(){
    cout << "Welcome to students grade book for\n"; // Display welcome message
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
