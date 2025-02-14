#include <iostream>
#include <vector>



using namespace std;

int main(){

    vector<int> nums;
    nums.resize(10);

    for(int i = 0; i < nums.size(); i++){
        cout << "Enter integer number: ";
        cin >> nums[i];
    }
    cout << "Unsorted array elements: ";
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    for(int i = 0; i < nums.size() - 1; i++){
        
        for(int j = 0; j < nums.size() - 1; j++){
            if(nums[j] > nums[j + 1]){
                int storage;
                storage = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = storage;
                
            }
            
        }
        
    }

    cout << endl;

    cout << "Sorted array using Bubble Sort algorithm: ";

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }




    return 0;
}