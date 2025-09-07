# Write your MySQL query statement below
select person_name  from(
    select person_name,
    sum(weight) over(order by turn) as curr_sum from Queue
) t
where curr_sum <= 1000
order by curr_sum desc
limit 1;