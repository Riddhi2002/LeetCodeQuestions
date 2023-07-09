# Write your MySQL query statement below
select e1.name
from employee e1
join employee e2
on e1.id=e2.managerid
group by e1.name
having count(e2.managerId)>=5