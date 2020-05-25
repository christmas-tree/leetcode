/*
https://leetcode.com/problems/subdomain-visit-count/
Runtime: 20 ms, faster than 97.28% of C++ online submissions for Subdomain Visit Count.
Memory Usage: 11.7 MB, less than 100.00% of C++ online submissions for Subdomain Visit Count.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include "../Tools/debugtools.h"
using namespace std;

vector<string> subdomainVisits(vector<string>& cpdomains) {
    unordered_map<string, int> countMap;
    vector<string> res;
    int individualCount;    
    for (int i = 0; i < cpdomains.size(); i++) {
        int spaceIdx = cpdomains[i].find(' ');
        individualCount = stoi(cpdomains[i].substr(0, spaceIdx));
        for (int j = cpdomains[i].size() - 1; j >= spaceIdx; j--) {
            if (cpdomains[i][j] == '.' || j == spaceIdx) {
                countMap[cpdomains[i].substr(j+1)] += individualCount;
            }
        }
    }
    for (auto it = countMap.begin(); it != countMap.end(); it++) {
        res.push_back(to_string(it->second) + " " + it->first);
    }
    return res;
}

// Driver code
int main() {
    vector<string> cpdomains = {"900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"};
    print(subdomainVisits(cpdomains));
}