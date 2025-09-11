# Write your MySQL query statement below
select name, bonus from Employee e left join bonus b on e.empid = b.empid
where (bonus < 1000) or (bonus is null);