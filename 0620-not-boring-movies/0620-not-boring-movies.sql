# Write your MySQL query statement below
select* from cinema
where cinema.id%2!=0 and cinema.description!="boring"
order by cinema.rating desc