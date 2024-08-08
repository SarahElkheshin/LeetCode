

SELECT P.product_name, SUM(O.unit) AS unit FROM Products P JOIN Orders O
 ON P.product_id = O.product_id
 WHERE DATE_FORMAT(O.order_date, "%Y-%M") = "2020-February"
 GROUP BY product_name HAVING SUM(O.unit)>=100