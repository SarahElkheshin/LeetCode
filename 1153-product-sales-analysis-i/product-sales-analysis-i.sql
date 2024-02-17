# Write your MySQL query statement below
select p.product_name, s.year, s.price FROM SALES S LEFT JOIN PRODUCT P ON 
S.product_id = P.product_id 