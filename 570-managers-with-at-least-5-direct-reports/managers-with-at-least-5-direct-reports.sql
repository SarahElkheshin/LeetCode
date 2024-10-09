# Write your MySQL query statement below
SELECT name FROM  Employee E INNER JOIN
(SELECT managerId FROM Employee GROUP BY managerId HAVING COUNT(managerId)>=5)TEMP
ON E.id = TEMP.managerId
