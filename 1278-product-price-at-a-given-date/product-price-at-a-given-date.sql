# Write your MySQL query statement below
with latest_change as (
select product_id, new_price as price ,
row_number() over (partition by product_id order by change_date desc) as rn
from products where change_date <= '2019-08-16'
)
select p.product_id ,coalesce(lc.price,10) as price
from (select distinct product_id from products) p left join latest_change lc
on p.product_id = lc.product_id and lc.rn = 1