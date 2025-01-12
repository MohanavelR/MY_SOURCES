
--    function MYSQL 
-- Numbaric
-- count
select count(*)TotalEmployee from emp;
-- ===============================================================
-- Average
select avg(salary) Avarage_salary from emp;
-- ===============================================================
-- sum
select sum(salary) Total_salary from emp where job="Engineer";
-- ===============================================================
-- max 
select max(salary) Maximun_salary from emp where job="Engineer";
-- ===============================================================
-- min
select min(salary) Total_salary_of from emp where job="Engineer";
-- ===============================================================
-- String
-- ucase
-- upper
select ucase(ename),salary from emp;
select upper(ename),salary from emp;
-- ===============================================================
-- lcase
-- lower
select lcase(ename) uppername,salary from emp;
select lower(ename),salary from emp;
-- ===============================================================
-- char_length
select ename, char_length(ename) char_count from emp;
-- ===============================================================
-- concat
select ename,concat("Rs .",salary) Amount from emp;
-- ===============================================================
-- format
select ename ,format(salary,0) salary from emp;
-- ===============================================================
-- left
select ename ,left(job,4) salary from emp;
-- ===============================================================

