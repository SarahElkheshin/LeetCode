WITH FIRST_ORDERS AS (SELECT CUSTOMER_ID, MIN(ORDER_DATE) as latest_order,  MIN(CUSTOMER_PREF_DELIVERY_DATE) as latest_delivery
FROM DELIVERY
GROUP BY CUSTOMER_ID)
SELECT 
    ROUND((SUM(latest_order = latest_delivery) * 100 / COUNT(*)) , 2) AS immediate_percentage 
FROM FIRST_ORDERS;