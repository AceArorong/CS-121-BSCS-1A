#include <iostream>

using namespace std;

int main(){

    
    string entry[3][3] = {{"Florence", "735-1234", "Manila"},
                          {"Joyce", "983-3333", "Quezon City"},
                          {"Becca", "456-3322", "Manila"}};

    for(int i = 0; i < 3; i++){
        int x{0};
        cout << "Name: " << entry[i][x++] << endl;
        cout << "Address: " << entry[i][x++] <<endl;
        cout << "Tel. #: " << entry[i][x] << endl;
        cout << endl;

    }

    return 0;
}
