SELECT 
    S.user_id,
    ROUND(
        IF(COUNT(C.user_id) > 0, SUM(IF(C.action = 'confirmed', 1, 0)) / COUNT(C.user_id), 0),
    2) AS confirmation_rate
FROM Signups S
LEFT JOIN Confirmations C ON S.user_id = C.user_id
GROUP BY S.user_id;
