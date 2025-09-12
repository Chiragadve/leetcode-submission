# Write your MySQL query statement below
select e.name as Department,d.name as Employee, e.salary as Salary from (

select id,name,departmentid,salary, dense_rank() over (partition by departmentid order by salary desc) as rnk from employee 

) e
join department d on e.departmentid = d.id 
where e.rnk <= 3
