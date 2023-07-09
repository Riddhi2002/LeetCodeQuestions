# Write your MySQL query statement below
select distinct v.customer_id, count(v.visit_id) as count_no_trans
from Visits v
left join transactions t
on v.visit_id=t.visit_id
where transaction_id is NULL
group by v.customer_id;