# Write your MySQL query statement below
select case
            when id = (select max(id) from seat) and id % 2 = 1
                then id
            when id % 2 = 1
                then id + 1
            else
                id - 1
        end as id,
        student
from seat
order by id asc
# the idea to just change the id if odd then change to even if even change to odd then order it 