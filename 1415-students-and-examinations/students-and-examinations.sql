# Write your MySQL query statement below

SELECT 
    s.student_id,
    s.student_name,
    sub.subject_name,
    COUNT(c.subject_name) AS attended_exams
FROM Students AS s
CROSS JOIN Subjects AS sub
LEFT JOIN Examinations AS c
    ON s.student_id = c.student_id
   AND sub.subject_name = c.subject_name
GROUP BY 
    s.student_id,
    s.student_name,
    sub.subject_name
ORDER BY 
    s.student_id, 
    sub.subject_name;


