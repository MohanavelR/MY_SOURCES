-- Distinct
-- this Skip duplicate 
select distinct job from emp; 
-- ===============================================================
-- Order by 
--  Acsending order sorting or ordered 
select * from emp order by ename;
select * from emp order by salary;
-- ===============================================================
select * from emp order by ename asc;
select * from emp order by salary asc;
-- ===============================================================
-- this descending  
select * from emp order by ename desc;
select * from emp order by salary desc;
-- ===============================================================
select * from emp order by salary,ename;
-- ===============================================================
select * from emp where job="Manager" order by salary,ename;       
-- ===============================================================
-- custom order
select * from emp order by (case job
when "ceo" then 1
when "Manager" then 2
when "Hr" then 3
when "engineer" then 4
when "sales" then 5
else 100 end
),ename;
-- ===============================================================
