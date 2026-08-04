# Write your MySQL query statement below
select u.name, IF(ISNULL(sum(r.distance)), 0, sum(r.distance)) as travelled_distance 
from Users u
left join Rides r
on u.id = r.user_id
group by u.id
order by travelled_distance desc,name;