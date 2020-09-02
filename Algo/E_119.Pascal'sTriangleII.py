'''
https://leetcode.com/problems/pascals-triangle-ii/
Runtime: 32 ms, faster than 49.48% of Python3 online submissions for Pascal's Triangle II.
Memory Usage: 13.7 MB, less than 81.57% of Python3 online submissions for Pascal's Triangle II.

'''

def getRow(rowIndex):
    if rowIndex == 0:
        return [1]
    row = [1]
    for i in range(1, rowIndex+1):
        for j in range(len(row)-1, 0, -1):
            row[j] = row[j-1] + row[j]
        row.append(1)
    
    return row

print(getRow(1))
