# Write your MySQL query statement below

SELECT E.employee_id, E.name, M.reports_count, M.average_age FROM Employees E,
(SELECT reports_to,ROUND(AVG(age)) AS average_age, COUNT(employee_id) AS reports_count
FROM Employees WHERE reports_to IS NOT NULL 
GROUP BY reports_to) AS M
WHERE
E.employee_id =  M.reports_to
ORDER BY employee_id
