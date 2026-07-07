# Write your MySQL query statement below
-- select a1.num from MyNumbers as a1 JOIN MyNumbers as a2 ON
SELECT max(num) as num FROM
(
    SELECT num
    from myNumbers
    group by num
    having count(*)=1
) AS UniqueNums;