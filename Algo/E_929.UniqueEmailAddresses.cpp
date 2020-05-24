/*
https://leetcode.com/problems/unique-email-addresses/
Runtime: 52 ms, faster than 41.81% of C++ online submissions for Unique Email Addresses.
Memory Usage: 14.5 MB, less than 19.05% of C++ online submissions for Unique Email Addresses.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include "../Tools/debugtools.h"
using namespace std;

string processAddress(string email) {
    string newEmail;
    bool alias = false;
    bool local = true;
    for (int i = 0; i < email.size(); i++) {
        if (!alias) {
            if (email[i] == '+') {
                alias = true;
                continue;
            }
            if (local && email[i] == '.')
                continue;
            newEmail += email[i];
        }
        if (email[i] == '@') {
            if (alias) newEmail += email[i];
            local = false;
            alias = false;
        }
    }
    return newEmail;
}

int numUniqueEmails(vector<string>& emails) {
    unordered_set<string> emailSet;
    for (int i = 0; i < emails.size(); i++) {
        emailSet.insert(processAddress(emails[i]));
    }
    for (auto it = emailSet.begin(); it != emailSet.end(); it++) {
        cout << *it << endl;
    }
    return emailSet.size();
}


// Driver code
int main() {
    vector<string> strings = {
        "test.email+alex@leetcode.com",
        "test.e.mail+bob.cathy@leetcode.com",
        "testemail+david@lee.tcode.com",
        "tnghia99@gmail.com",
        "tngh.ia99@gmail.com",
        "tnghia.99+github@gmail.com"
        };
    cout << numUniqueEmails(strings);
}