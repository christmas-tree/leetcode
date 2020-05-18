/*
https://leetcode.com/problems/swap-salary/
Runtime: 807 ms, faster than 65.40% of MS SQL Server online submissions for Swap Salary.
Memory Usage: 0B, less than 100.00% of MS SQL Server online submissions for Swap Salary.
*/

UPDATE salary
SET sex =
    (CASE WHEN sex='m' THEN 'f'
    ELSE 'm' END)
