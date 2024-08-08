# Write your MySQL query statement below
WITH CTE AS 
(SELECT product_id, SUM(unit) AS unit FROM Orders 
WHERE DATE_FORMAT(order_date, "%Y-%M") = "2020-February"
GROUP BY product_id HAVING SUM(unit)>=100 )

SELECT P.product_name, CTE.unit FROM Products P JOIN CTE ON P.product_id = CTE.product_id