# Write your MySQL query statement below
select s.student_id, s.student_name, ss.subject_name,(
    select count(*) from examinations e where 
    e.student_id = s.student_id and
    e.subject_name = ss.subject_name
) as attended_exams
from students s cross join subjects ss 
order by s.student_id , s.student_name, ss.subject_name