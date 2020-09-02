'''
https://leetcode.com/problems/pascals-triangle/
Runtime: 28 ms, faster than 83.20% of Python3 online submissions for Pascal's Triangle.
Memory Usage: 13.8 MB, less than 67.14% of Python3 online submissions for Pascal's Triangle.
'''

def generate(numRows):
    if numRows == 0:
        return []
    elif numRows == 1:
        return [[1]]
    triangle = [[1]]
    for i in range(1, numRows):
        row = [1]
        for j in range(1, i):
            row.append(triangle[i-1][j-1] + triangle[i-1][j])
        row.append(1)
        triangle.append(row)
    return triangle