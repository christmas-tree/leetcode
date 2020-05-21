/*
https://leetcode.com/problems/hamming-distance/

*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

int hammingDistance(int x, int y) {
    int res = 0;
    int xo = x ^ y;
    while (xo > 0) {
        if (xo & 0b1) res++;
        xo >>= 1;
    }
    return res;
}
// Driver code
int main() {
    int x, y;
    cin >> x >> y;
    cout << hammingDistance(x, y);
}