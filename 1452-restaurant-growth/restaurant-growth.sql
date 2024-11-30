WITH CTE AS (
    SELECT 
        visited_on,
        SUM(amount) OVER (ORDER BY visited_on RANGE BETWEEN INTERVAL 6 DAY PRECEDING AND CURRENT ROW) AS amount
    FROM Customer
)
SELECT 
    visited_on, 
    amount, 
    ROUND(amount / 7, 2) AS average_amount
FROM CTE
GROUP BY visited_on, amount
HAVING visited_on >= (SELECT MIN(visited_on) + INTERVAL 6 DAY FROM Customer)
ORDER BY visited_on;
