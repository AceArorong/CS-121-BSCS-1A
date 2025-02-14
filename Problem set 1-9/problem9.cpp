#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> data = {12, 11, -1, 5, 6, 0, 8, 3, 2, 1, 15, 18, 4, 16, 10, 9, 7, 13, 14, 17};

    cout << "Unsorted array: ";
    for (int x : data) {
        cout << x << " ";
    }
    cout << endl;

    int n = data.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }

    cout << "========================================================================\n";

    cout << "Using selection sort: ";
    for (int x : data) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}