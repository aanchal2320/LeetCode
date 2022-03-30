# Write your MySQL query statement below
SELECT max(salary) as SecondHighestSalary from Employee
where salary<(select max(salary)from Employee);