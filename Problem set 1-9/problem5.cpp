#include <iostream>

using namespace std;

int main() {
    
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    int size = sizeof(days) / sizeof(days[0]);

    int i{};

    cout << "====================== While Loop ======================\n";
    while(i < size){
        cout << days[i] << " ";
        i++;
    }

    cout << "\n\n====================== Do-While Loop ======================\n";

    i = 0;

    do{
        cout << days[i] << " ";
        i++;
    } while(i < size);

    cout << "\n\n====================== For Loop ======================\n";

    for(i = 0; i < size; i++){
        cout << days[i] << " ";
    }


    return 0;
}
