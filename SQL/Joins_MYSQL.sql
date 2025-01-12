-- joins
-- Inner Join
-- this view only (on) condition remaining is skip
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp
inner join branch 
on emp.branch_id=emp.branch_id;
-- =================================================================
-- left join
-- this view All left table(emp)  (on) condition remain also view 
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp
left join branch 
on emp.branch_id=emp.branch_id;
-- ================================================================
-- left join
-- this view All right table(branch)  (on) condition remain also view 
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp
right join branch 
on emp.branch_id=emp.branch_id;
-- ================================================================
-- join use where
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp,branch
where emp.branch_id=emp.branch_id;
-- ==================================================================
-- cross
-- cross join is left table all values all right table values join do view
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp
cross join branch ;