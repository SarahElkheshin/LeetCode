# Write your MySQL query statement below
SELECT S.student_id, S.student_name, SB.subject_name, COUNT(E.student_id) AS attended_exams
FROM Students S CROSS JOIN SUBJECTS SB
LEFT JOIN Examinations E ON S.student_id = E.student_id AND E.subject_name = SB.subject_name
GROUP BY S.student_id, SB.subject_name 
ORDER BY S.student_id, SB.subject_name