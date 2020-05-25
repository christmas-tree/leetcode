#include <iostream>
#include <vector>
using namespace std;


void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

void print(vector<bool> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

void print(vector<string> strings) {
    for (int i = 0; i < strings.size(); i++) {
        cout << strings[i] << " ";
    }
}

void print(vector<vector<int>> nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[0].size(); j++)
            cout << nums[i][j] << " ";
        cout << endl;
    }
}