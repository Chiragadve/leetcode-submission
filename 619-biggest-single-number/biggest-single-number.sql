# Write your MySQL query statement below
select  coalesce(max(num),NULL) as num from (select num from MyNumbers group by num having count(*) <= 1) as t