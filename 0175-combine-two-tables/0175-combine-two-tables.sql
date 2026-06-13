# Write your MySQL query statement below
SELECT p.firstName,p.lastName,
       a.city, a.state
FROM Person AS P
LEFT JOIN Address AS a
ON p.personId = a.personId;