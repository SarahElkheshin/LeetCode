# Write your MySQL query statement below
SELECT ST.*, SB.*,COUNT(E.subject_name) AS attended_exams FROM STUDENTS ST CROSS JOIN SUBJECTS SB LEFT JOIN EXAMINATIONS E
ON ST.student_id = E.student_id AND SB.subject_name = E.subject_name
GROUP BY ST.student_id, SB.subject_name
ORDER BY ST.student_id, SB.subject_name
