# Write your MySQL query statement below
select *
from patients
where conditions like 'Diab1%' or conditions like '% Diab1%';