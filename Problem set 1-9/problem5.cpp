#include <iostream>

using namespace std;

int main(){
    
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int size = sizeof(days) / sizeof(days[0]);
    cout << "While Loop: \n";
    int i = 0;
    while(i < size){
        cout << days[i] << "  ";
        i++;
    }

    cout << "\n===================================================================\n";


    cout << "Do-While Loop: \n";
    i = 0;
    do {
        cout << days[i] << "  ";
        i += 1;41
    } while(i < size);

    cout << "\n===================================================================\n";

    cout << "For Loop: \n";
    for(i = 0; i < size; i++){
        cout << days[i] << "  ";
    }

    return 0;
}
