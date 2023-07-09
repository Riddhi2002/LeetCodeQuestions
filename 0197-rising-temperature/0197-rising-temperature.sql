# Write your MySQL query statement below
select w2.id
from weather w1
join weather w2
where datediff(w1.recorddate,w2.recorddate)=-1
and w1.temperature<w2.temperature