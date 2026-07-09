# Write your MySQL query statement below
select id,
    case
        when p_id is NULL then 'Root'
        WHEN id NOT IN (
            SELECT p_id
            FROM Tree
            WHERE p_id IS NOT NULL
        ) THEN 'Leaf'
        else 'Inner'
    end as type

from Tree;
