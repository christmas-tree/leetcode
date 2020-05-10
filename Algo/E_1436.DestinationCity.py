
'''
https://leetcode.com/problems/destination-city/
Runtime: 52 ms, faster than 86.73% of Python3 online submissions for Destination City.
Memory Usage: 14 MB, less than 100.00% of Python3 online submissions for Destination City.
'''


def destCity(paths):
    destSet = set({})
    for path in paths:
        destSet.add(path[1])
    for path in paths:
        if path[0] in destSet:
            destSet.remove(path[0])
    return destSet.pop()

print(destCity([["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]))