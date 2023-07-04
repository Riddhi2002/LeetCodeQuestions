# Write your MySQL query statement below
select e.name, eu.unique_id
from Employees e
left join employeeUNI eu
ON e.id=eu.id;

