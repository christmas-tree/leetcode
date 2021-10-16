/*


*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include "../Tools/debugtools.h"
using namespace std;


bool dfs(int src, int numCourses, vector<int> graph[],  vector<int>& res) {
    res.push_back(src);
    print(res);
    cout << endl;
    if (res.size() == numCourses) {
        return true;
    }
    for (int v: graph[src]) {
        if (dfs(v, numCourses, graph, res))
            return true;
    }
    res.pop_back();
    return false;
}


vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    unordered_set<int> graph[numCourses];

    for (int i = 0; i < numCourses; i++) {
        
    }

    for (auto preq: prerequisites) {
        graph[preq[1]].push_back(preq[0]);
        for (int i = 0; i < numCourses; i++) {
            if ()
        }
    }

    for (auto vec: graph) {
        for (auto i: vec) {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "-----------";

    
    vector<int> res;
    for (int i = 0; i < numCourses; i++) {
        if (dfs(i, numCourses, graph, res)) {
            break;
        };
    }
    return res;
}

// Driver code
int main() {
    vector<vector<int>> nums;
    nums.push_back({1, 0});
    nums.push_back({2, 0});
    nums.push_back({3, 1});
    nums.push_back({3, 2});

    int numCourse = 4;
    vector<int> res = findOrder(numCourse, nums);

    cout << "Result: ";
    print(res);
}