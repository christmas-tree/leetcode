/*
https://leetcode.com/problems/maximum-69-number/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum 69 Number.
Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Maximum 69 Number.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

int maximum69Number (int num) {
    int temp = num;
    int tens = 1000;
    while (temp > 0) {
        if (temp / tens == 6)
            return num + 3*tens;
        temp %= tens;
        tens /= 10;
    }
    return num;
}

// Driver code
int main() {
    int num = 969;
    cout << maximum69Number(num);
}