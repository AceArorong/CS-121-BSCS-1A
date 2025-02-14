#include <iostream>

using namespace std;


int main(){

    string entries[3][3] = {{"Florence", "735-1234", "Manila"},
       {"Joyce", "983-3333", "Quezon City"},
       {"Becca", "456-3322", "Manila"}};

       for(int i = 0; i < sizeof(entries) / sizeof(entries[0]); i++){
        int b = 0;
        cout << "Name: " << entries[i][b] << endl;
        cout << "Tel.#: " << entries[i][b += 1] << endl;
        cout << "Address: " << entries[i][b += 1] << endl;
       }


    return 0;
}