/*


*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums);





// Driver code
int main() {
    int target = 5;
    vector<int> nums = {1,2,3};
    function(nums);
    print(nums);
}

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}