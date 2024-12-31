#include <vector>
#include <iostream>
using namespace std;

int majorityElement(vector<int> nums) {
    int candidate = -1, count = 0;

    // Phase 1: Find the candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        }
        else if (num == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate){
            count++;
        }
    }

    if (count > nums.size() / 2) {
        return candidate;
    }
    return -1;
}

int main() {
    vector<int> nums = { 2, 1, 3, 3, 1, 1, 3, 2, 1};
    cout << "Majority Element: " << majorityElement(nums) << endl;

    return 0;
}
