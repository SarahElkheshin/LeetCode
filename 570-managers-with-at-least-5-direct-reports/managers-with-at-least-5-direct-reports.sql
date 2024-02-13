/****** Script for SelectTopNRows command from SSMS  ******/

select name from employee inner join 
(select managerid  FROM Employee  where managerid is not null group by managerid having count(id) >= 5) as m
on employee.id = m.managerid


