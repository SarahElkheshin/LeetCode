# Write your MySQL query statement below

SELECT D.name AS "Department" , SALARYRANKED.name AS "Employee", SALARYRANKED.salary AS "Salary"  FROM 
 (
     SELECT name,salary,departmentId,DENSE_RANK() OVER(PARTITION BY departmentId ORDER BY SALARY DESC) AS RNK FROM Employee 
) SALARYRANKED 
 JOIN Department D 
ON SALARYRANKED.departmentId = D.id AND RNK<4 