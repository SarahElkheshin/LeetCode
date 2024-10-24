# Write your MySQL query statement below
SELECT DISTINCT (L1.num) AS ConsecutiveNums FROM logs L1 
LEFT JOIN logs L2 ON L2.id = L1.id+1
LEFT JOIN logs L3 ON L3.id = L2.id+1
WHERE L1.num = L2.num AND L1.num = L3.num