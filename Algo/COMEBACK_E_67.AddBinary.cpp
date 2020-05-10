/*
https://leetcode.com/problems/add-binary/

*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums);

string addBinary(string a, string b) {
    if (a.size() < b.size()) {
        string temp = a;
        b = temp;
        a = b;
    }
    bool carry;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '1' && b[i] == 1) {
            a[i] = 
        }
    }
        
}

// Driver code
int main() {
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b);
}
