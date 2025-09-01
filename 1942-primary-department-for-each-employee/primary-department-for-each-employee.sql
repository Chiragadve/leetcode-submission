# Write your MySQL query statement below
select employee_id,department_id from (
select *, count(*) over (partition by employee_id) as dept_count from employee) as t
where primary_flag = 'Y' or dept_count = 1;