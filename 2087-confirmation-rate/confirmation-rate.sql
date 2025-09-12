# Write your MySQL query statement below 
# things to remember instead of coalesce i can use ifnull() and i can use if() instead of case when
select s.user_id, round(
    ifnull(
        avg(
            case when c.action = 'confirmed' then 1
                 when c.action = 'timeout' then 0
            end
        )
     ,0)
,2) as confirmation_rate
from signups s left join confirmations c on s.user_id = c.user_id
group by s.user_id