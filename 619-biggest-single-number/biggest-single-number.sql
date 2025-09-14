# Write your MySQL query statement below
select ifnull(max(num),null) as num from (
    select num from Mynumbers group by num having count(num) = 1
) t;