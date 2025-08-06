
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i <= n - 2; i++) {
            int mini = i;

            for (int j = i; j <= n - 1; j++) {
                if (nums[j] < nums[mini]) {
                    mini = j;
                }
            }

            int temp = nums[i];
            nums[i] = nums[mini];
            nums[mini] = temp;
        }

        return nums;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sorted = sol.selectionSort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
