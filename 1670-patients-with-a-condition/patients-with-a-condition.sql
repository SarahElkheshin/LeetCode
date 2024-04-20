# Write your MySQL query statement below
#This will not work because DIAB1 must be prefix and not inside the word
#SELECT * FROM Patients  WHERE POSITION("DIAB1" IN CONDITIONS) != 0

SELECT * FROM Patients WHERE CONDITIONS LIKE '% DIAB1%' OR CONDITIONS LIKE 'DIAB1%';
