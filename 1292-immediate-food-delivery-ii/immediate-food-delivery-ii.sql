# Write your MySQL query statement below
select round(sum(customer_pref_delivery_date = order_date) / count(*) * 100,2)
as immediate_percentage from Delivery d where order_date = ( 
    select MIN(order_date)
    from delivery
    where d.customer_id = customer_id
);