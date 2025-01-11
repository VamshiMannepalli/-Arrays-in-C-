#include <iostream>
#include <vector>

using namespace std;

vector<int> targetSum(const int nums[], int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; // Return the indices as a vector
            }
        }
    }
    return {}; // Return an empty vector if no solution is found
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int size = sizeof(nums) / sizeof(nums[0]); // Calculate the size of the array
    int target = 9;

    vector<int> result = targetSum(nums, size, target);

    if (!result.empty()) {
        cout << "Output is: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
