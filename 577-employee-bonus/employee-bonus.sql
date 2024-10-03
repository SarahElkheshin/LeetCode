# Write your MySQL query statement below
SELECT E.name, B.Bonus FROM Employee E LEFT JOIN Bonus B ON E.empId = B.empId
WHERE  B.Bonus < 1000 OR  B.Bonus IS NULL
