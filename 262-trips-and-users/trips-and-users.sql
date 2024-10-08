SELECT 
    T.request_at AS "Day",
    ROUND(
        SUM(CASE 
            WHEN T.status <> 'completed' THEN 1 
            ELSE 0 
        END) /
        COUNT(T.id), 
    2) AS "Cancellation Rate"
FROM 
    Trips T
JOIN 
    Users U1 ON T.client_id = U1.users_id
JOIN 
    Users U2 ON T.driver_id = U2.users_id
WHERE 
    T.request_at BETWEEN '2013-10-01' AND '2013-10-03'
    AND U1.banned = 'No'
    AND U2.banned = 'No'
GROUP BY 
    T.request_at;
