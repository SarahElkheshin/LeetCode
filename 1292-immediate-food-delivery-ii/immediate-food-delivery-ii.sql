SELECT ROUND(
    (SUM(IF(order_date = customer_pref_delivery_date, 1, 0)) / COUNT(customer_id))*100, 2
) AS immediate_percentage
FROM (
    SELECT customer_id, order_date, customer_pref_delivery_date, 
           ROW_NUMBER() OVER (PARTITION BY customer_id ORDER BY order_date ASC) AS RN
    FROM Delivery
) TEMP
WHERE RN = 1;
