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

int binarySearch(const vector<int>& array, int target, int left, int right) {
    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (array[mid] == target ) {
            return mid;
        }
        else if (array[mid] > target ) {
            right =  mid -1;
        }
        else {
            left =  mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> array = { 1, 2, 5, 3, 5, 3, 4, 7, 9, 0, 3 };
    quickSort(array, 0, array.size() - 1);
    for (int num : array) {
        cout << num << " ";
    }


    cout << endl;
    int target = 5;
    int result = binarySearch(array, target, 0, array.size() - 1);
    cout << "Element: " << result << endl;
    return 0;
}
