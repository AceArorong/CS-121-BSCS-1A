#include <iostream>
#include <algorithm>

using namespace std;


int main(){


    int intArr[10] = {9, 10, 8, 2, 7, 15, 6, 4, 5, 89};

    cout << "================ Unsorted Array ================\n";

    for(int y : intArr){
        cout << y << " ";
    }


    for(int j = 0; j < 10; j++){
        bool swapped = false;
        for(int i = 0; i < 10 - j - 1; i++){
            if(intArr[i] > intArr[i + 1]){
                swap(intArr[i], intArr[i + 1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        } 
    }

    cout << "\n\n================ Bubble Sorted ================\n";

    for(int x:intArr){
        cout << x << " ";
    }

    return 0;
}
