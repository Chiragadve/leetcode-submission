# Write your MySQL query statement below
select e.name from employee e join employee e1
on e.id = e1.managerID 
group by e1.managerid
having count(*) >= 5 