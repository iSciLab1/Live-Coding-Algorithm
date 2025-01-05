#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& array, int low, int high) {
    if (low < high) {
        int pivot = array[high];
        int idx = low;
        for (int i = low; i < high; i++) {
            if (array[i] < pivot) {
                swap(array[idx], array[i]);
                idx++;
            }
        }
        swap(array[idx], array[high]);
        quickSort(array, low, idx -1 );
        quickSort(array, idx + 1, high);
    }
}


int main() {
    vector<int> array = { 1, 2, 5, 3, 5, 3, 4, 7, 9, 0, 3 };

    quickSort(array, 0, array.size() - 1);

    for (int num : array) {
        cout << num << " ";
    }
    return 0;
}
