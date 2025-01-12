-- groupby
select * from emp order by job;
select job,avg(salary) from emp group by job ;
-- =================================================================
select job,count(emp_id) from emp group by job ;
-- =================================================================
-- having
select job,count(emp_id) from emp group by job having count(emp_id)>1;
-- =================================================================
select job,count(emp_id) from emp group by job having avg(salary)>3100000;

-- =================================================================
select job,count(emp_id) from emp group by job having avg(salary)>2000000 order by job ;
select job,count(emp_id) from emp where salary>250000 group by job having count(emp_id)>1;
