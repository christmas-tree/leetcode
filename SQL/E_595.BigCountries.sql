/*
https://leetcode.com/problems/big-countries/submissions/
Runtime: 1301 ms, faster than 71.60% of MS SQL Server online submissions for Big Countries.
Memory Usage: 0B, less than 100.00% of MS SQL Server online submissions for Big Countries.
*/

SELECT [name], [population], [area]
FROM World
WHERE [area] > 3000000 OR [population] > 25000000