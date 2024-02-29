WITH END AS (SELECT * FROM ACTIVITY WHERE ACTIVITY_TYPE='end')
SELECT A.MACHINE_ID, ROUND(AVG(END.TIMESTAMP - A.TIMESTAMP),3) AS processing_time
FROM ACTIVITY A JOIN END 
ON A.MACHINE_ID = END.MACHINE_ID
AND A.PROCESS_ID = END.PROCESS_ID
AND A.ACTIVITY_TYPE = 'start'
GROUP BY A.MACHINE_ID