# Write your MySQL query statement below

 SELECT d.name as "Department", e.name as "Employee", e.salary FROM Employee e
 LEFT JOIN  Department d ON e.departmentId = d.id 
 WHERE (e.departmentId, salary) IN ( SELECT departmentId, MAX(salary)  FROM Employee GROUP BY departmentId )