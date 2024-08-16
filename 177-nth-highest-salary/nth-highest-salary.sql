CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE nth_highest_salary INT;

    -- Using a Common Table Expression (CTE) to rank salaries
    WITH RankedSalaries AS (
        SELECT salary, DENSE_RANK() OVER (ORDER BY salary DESC) AS rn
        FROM Employee
    )
    -- Select the N-th highest salary
    SELECT salary INTO nth_highest_salary
    FROM RankedSalaries
    WHERE rn = N LIMIT 1;

    RETURN nth_highest_salary;
END;
